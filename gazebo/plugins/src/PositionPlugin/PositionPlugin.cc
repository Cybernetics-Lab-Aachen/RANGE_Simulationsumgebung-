#include <boost/bind.hpp>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include "lib/Return/Return_publisher.h"
#include "lib/RTI_Localization/Localization_publisher.h"
#include "lib/PositionPlugin/PositionPlugin.h"
#include "lib/PositionPlugin/PositionPluginSupport.h"
#include "ndds/ndds_cpp.h"
#include <boost/random.hpp>
#include <boost/random/normal_distribution.hpp>

#define NOISE 1
#define XY_ERROR 0.05
#define Z_ERROR 0.2

namespace gazebo
{
    
    
    /* Delete all entities */
    static int subscriber_shutdown(
        DDSDomainParticipant *participant)
    {
        DDS_ReturnCode_t retcode;
        int status = 0;

        if (participant != NULL) {
            retcode = participant->delete_contained_entities();
            if (retcode != DDS_RETCODE_OK) {
                printf("delete_contained_entities error %d\n", retcode);
                status = -1;
            }

            retcode = DDSTheParticipantFactory->delete_participant(participant);
            if (retcode != DDS_RETCODE_OK) {
                printf("delete_participant error %d\n", retcode);
                status = -1;
            }
        }

        /* RTI Connext provides the finalize_instance() method on
        domain participant factory for people who want to release memory used
        by the participant factory. Uncomment the following block of code for
        clean destruction of the singleton. */
        /*

        retcode = DDSDomainParticipantFactory::finalize_instance();
        if (retcode != DDS_RETCODE_OK) {
            printf("finalize_instance error %d\n", retcode);
            status = -1;
        }
        */
        return status;
    }

    
    class PositionPlugin : public ModelPlugin
    {
        
        
        private: int PositionPluginRequestSubscriber_init(int domainId, char* topicName)
        {
            DDSDomainParticipant *participant = NULL;
            DDSSubscriber *subscriber = NULL;
            DDSTopic *topic = NULL;
            gazebo_PositionPluginRequestListener *reader_listener = NULL; 
            DDSDataReader *reader = NULL;
            DDS_ReturnCode_t retcode;
            const char *type_name = NULL;
            int count = 0;
            DDS_Duration_t receive_period = {4,0};
            int status = 0;
            
                //fix because we reach the resource limit with more then 11 participants
        //https://community.rti.com/kb/how-many-domain-participants-can-be-created-single-address-space
        //
        DDS_DomainParticipantFactoryQos factoryQoS;
        DDSTheParticipantFactory->get_qos(factoryQoS);
        /* increase max_objects_per_thread as needed.
        * The default is 1024 (512 for 4.4c and below). */
        factoryQoS.resource_limits.max_objects_per_thread = 4096;
        DDSTheParticipantFactory->set_qos(factoryQoS);
	

            /* To customize the participant QoS, use 
            the configuration file USER_QOS_PROFILES.xml */
            participant = DDSTheParticipantFactory->create_participant(
                domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
                NULL /* listener */, DDS_STATUS_MASK_NONE);
            if (participant == NULL) {
                printf("create_participant error\n");
                subscriber_shutdown(participant);
                return -1;
            }

            /* To customize the subscriber QoS, use 
            the configuration file USER_QOS_PROFILES.xml */
            subscriber = participant->create_subscriber(
                DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
            if (subscriber == NULL) {
                printf("create_subscriber error\n");
                subscriber_shutdown(participant);
                return -1;
            }

            /* Register the type before creating the topic */
            type_name = gazebo_PositionPluginRequestTypeSupport::get_type_name();
            retcode = gazebo_PositionPluginRequestTypeSupport::register_type(
                participant, type_name);
            if (retcode != DDS_RETCODE_OK) {
                printf("register_type error %d\n", retcode);
                subscriber_shutdown(participant);
                return -1;
            }

            /* To customize the topic QoS, use 
            the configuration file USER_QOS_PROFILES.xml */
            topic = participant->create_topic(
                topicName,
                type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
                DDS_STATUS_MASK_NONE);
            if (topic == NULL) {
                printf("create_topic error\n");
                subscriber_shutdown(participant);
                return -1;
            }

            /* Create a data reader listener */
            reader_listener = new gazebo_PositionPluginRequestListener(this);

            /* To customize the data reader QoS, use 
            the configuration file USER_QOS_PROFILES.xml */
            reader = subscriber->create_datareader(
                topic, DDS_DATAREADER_QOS_DEFAULT, reader_listener,
                DDS_STATUS_MASK_ALL);
            if (reader == NULL) {
                printf("create_datareader error\n");
                subscriber_shutdown(participant);
                delete reader_listener;
                return -1;
            }

            return 0;
        }
        
        class gazebo_PositionPluginRequestListener : public DDSDataReaderListener {
                public: gazebo::PositionPlugin *plugin;
                        
                public: gazebo_PositionPluginRequestListener(PositionPlugin* pl){
                        plugin=pl;
                }
                    
                public: virtual void on_data_available(DDSDataReader* reader);
        };

/************************************************************************************************************/
        math::Pose myActPose;
     
        
        double targetDepth;
        double speed;
        int melting;

        
        // Pointer to the model
        private: physics::ModelPtr model;

        // Pointer to the update event connection
        private: event::ConnectionPtr updateConnection;
        
         private: transport::NodePtr node;
         transport::PublisherPtr visPub;
        std::string name;
        
        
        /**
        * @brief Function that is called when the model is loaded. Initializes the localization subscriber and the updateConnection
        *
        * @param _parent: Pointer to the corresponding model
        */
        public: void Load(physics::ModelPtr _parent, sdf::ElementPtr _sdf)
        {
            // Store the pointer to the model
            this->model = _parent;
            
            this->name = model->GetName();
            
            //init actual pose and target pose
            myActPose = this->model->GetWorldPose();
            
            targetDepth=myActPose.pos.z;
    
            char* topic = "gazebo_MeltReturn";

            returnPublisher_init(1,topic);
            
            //start a publisher on sensor topic
            topic = "gazebo_LocalizationAnswer";
            localizationPublisher_init(1,topic);
            
            topic="gazebo_PositionPlugin";
            PositionPluginRequestSubscriber_init(1,topic);
            
            targetDepth=this->model->GetWorldPose().pos.z;

            //creates an listener to the Update  World Event, which is called every iteration
            this->updateConnection = event::Events::ConnectWorldUpdateBegin(
                boost::bind(&PositionPlugin::OnUpdate, this, _1));
            
                   this->node = transport::NodePtr(new transport::Node());
                   this->node->Init(_parent->GetWorld()->GetName());
                   visPub = this->node->Advertise<msgs::Visual>("~/visual", 10);
        }
        
          /**
        * @brief Sends the current Position using the previous initialized Localization publisher
        */
        public: void writePosition(){
                //get pose of model
                gazebo::math::Pose pose = this->model->GetWorldPose();
                math::Vector3 v(0,0,0);
                v = pose.pos;

                math::Quaternion q(0,0,0,0);
                q = pose.rot;
                
                //create a new instance of Localization struct
                de_dlr_enex_datamodel_range_Localization *instance = de_dlr_enex_datamodel_range_LocalizationTypeSupport::create_data();

                //fills the instance with the absolute world position of the model
                instance->relative_position.position.x=v.x;
                instance->relative_position.position.y=v.y;
                instance->relative_position.position.z=v.z;
                instance->relative_position.orientation.x=q.x;
                instance->relative_position.orientation.y=q.y;
                instance->relative_position.orientation.z=q.z;
                instance->relative_position.orientation.w=q.w;
                
                strcpy(instance->apu,this->model->GetName().c_str());

                //publishes the instance in its topic
                DDS_ReturnCode_t retcode = localizationPublisher_write(instance);
                if (retcode != DDS_RETCODE_OK) {
                    printf("write error %d\n", retcode);
                }
        }
        
        public: void onRTIUpdate(gazebo_PositionPluginRequest* instance){
            
           
                
            std::string id = instance->apu;
            math::Pose targetPose;
            if(id.compare(this->model->GetName())==0){
             
                switch(instance->act){
                    case SET_POSITION:
            
                        targetPose.pos.x = instance->pos.posX;
                        targetPose.pos.y = instance->pos.posY;
                        targetPose.pos.z = instance->pos.posZ;
                        this->model->SetWorldPose(targetPose);
                        break;
                    case GET_POSITION:
                        
                    
                        writePosition();
                        break;
                    case MELT:
                        
                        gazebo::msgs::Visual visMsg;
                        visMsg.set_transparency(1.0);
                        visMsg.set_visible(false);
                        visMsg.set_name(name+"::link::visual");
                        visMsg.set_parent_name(name+"::link");
                        visPub->Publish(visMsg);
                        
                        gazebo::msgs::Visual visMsg2;
                        visMsg2.set_transparency(0.0);
                        visMsg2.set_visible(true);
                        visMsg2.set_name(name+"::link::visual2");
                        visMsg2.set_parent_name(name+"::link");
                        visPub->Publish(visMsg2);	
                        speed = instance->melt.speed;
                        
                        
                        if(NOISE==1){
                            boost::mt19937 rng;
                            static unsigned int seed = 0;
                            rng.seed((++seed) + time(NULL));
                            boost::normal_distribution<> del(0,Z_ERROR);
                            
                            boost::variate_generator<boost::mt19937&,boost::normal_distribution<> > var_del(rng,del);
                            
                            targetDepth =  var_del();
                            if(targetDepth < -1.5*Z_ERROR) targetDepth = -1.5*Z_ERROR;
                            else if(targetDepth > 1.5*Z_ERROR) targetDepth = 1.5*Z_ERROR;
                            targetDepth += (this->model->GetWorldPose().pos.z)-instance->melt.depth;
                        }
                        else {
                            targetDepth = (this->model->GetWorldPose().pos.z)-instance->melt.depth;
                        }
                        
                        
                        melting = 1;
                        printf("Melting in with target Depth %f\n", targetDepth);
                        break;
                }
                
            }
        }
        

         /**
        * @brief Sends a MeltReturn Message when the target depth is reached.
        *
        * @param depth: The current depth (Z-value)
        *
        */
        public: void sendReturn(double depth){
            
            	gazebo::msgs::Visual visMsg;
                visMsg.set_transparency(0.0);
                visMsg.set_visible(true);
                visMsg.set_name(name+"::link::visual");
                visMsg.set_parent_name(name+"::link");
                visPub->Publish(visMsg);
                
                gazebo::msgs::Visual visMsg2;
                visMsg2.set_transparency(1.0); 
                visMsg2.set_visible(false);
                visMsg2.set_name(name+"::link::visual2");
                visMsg2.set_parent_name(name+"::link");
                visPub->Publish(visMsg2);
                
                //create a new instance of Localization struct
                range_Return *instance = range_ReturnTypeSupport::create_data();
            
                instance->depth=depth;
                instance->id=(char*)this->model->GetName().c_str();

                //publishes the instance in its topic
                    DDS_ReturnCode_t retcode = returnPublisher_write(instance);
                if (retcode != DDS_RETCODE_OK) {
                        printf("write error %d\n", retcode);
                    }
            
        }
                
      
         /**
        * @brief Checks if the APU has reached the requested position
        *
        * @return 1 if the position is reached, 0 otherwise 
        */
        public: int checkPose(){
                if(std::abs(targetDepth-this->model->GetWorldPose().pos.z)<0.001)return 0;
              
                return 1;
        }   
        
          /**
        * @brief Function that is called when the world updated and moves the model depending on the speed (from 1 to 100)
        */
        public: void OnUpdate(const common::UpdateInfo & /*_info*/)
        {
                myActPose = this->model->GetWorldPose();
                if(checkPose()==0){
                     
                        
                        this->model->SetLinearVel(math::Vector3(0, 0, 0));
                       
                        if(melting==1){
                            melting = 0;
                            sendReturn(myActPose.pos.z);
                        }
                            return;
                }
                else {
                
                    if(melting ==1){
                         
                         myActPose.pos.z-=speed/30000;
                         this->model->SetWorldPose(myActPose);   
                    }
            
                }
                
        }
        
        
      

        
    };
    
// Register this plugin with the simulator
GZ_REGISTER_MODEL_PLUGIN(PositionPlugin)
}

   void gazebo::PositionPlugin::gazebo_PositionPluginRequestListener::on_data_available(DDSDataReader* reader)
{
    gazebo_PositionPluginRequestDataReader *gazebo_PositionPluginRequest_reader = NULL;
    gazebo_PositionPluginRequestSeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    gazebo_PositionPluginRequest_reader = gazebo_PositionPluginRequestDataReader::narrow(reader);
    if (gazebo_PositionPluginRequest_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = gazebo_PositionPluginRequest_reader->take(
        data_seq, info_seq, DDS_LENGTH_UNLIMITED,
        DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

    if (retcode == DDS_RETCODE_NO_DATA) {
        return;
    } else if (retcode != DDS_RETCODE_OK) {
        printf("take error %d\n", retcode);
        return;
    }

    for (i = 0; i < data_seq.length(); ++i) {
        if (info_seq[i].valid_data) {
    
            plugin->onRTIUpdate(&data_seq[i]);
        }
    }

    retcode = gazebo_PositionPluginRequest_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

