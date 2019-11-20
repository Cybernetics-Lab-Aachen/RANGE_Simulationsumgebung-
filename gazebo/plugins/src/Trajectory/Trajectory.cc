
#include "gazebo/physics/physics.hh"
#include "gazebo/transport/TransportTypes.hh"
#include "gazebo/msgs/MessageTypes.hh"

#include "gazebo/common/Time.hh"
#include "gazebo/common/Plugin.hh"
#include "gazebo/common/Events.hh"

#include "gazebo/rendering/DynamicLines.hh"
#include "gazebo/rendering/RenderTypes.hh"
#include "gazebo/rendering/Visual.hh"
#include "gazebo/rendering/Scene.hh"

#include "trajectory_handler.h"
#include "lib/TrajectoryRequest/TrajectoryRequest.h"
#include "lib/TrajectoryRequest/TrajectoryRequestSupport.h"

#include "lib/TrajectoryRequest/TrajectoryRequest.h"
#include "lib/TrajectoryRequest/TrajectoryRequestSupport.h"

#include <boost/thread.hpp>
#include <boost/bind.hpp>

namespace gazebo {

namespace rendering {

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

    return status;
}



class Trajectory : public VisualPlugin {

	private:VisualPtr visual_;

	private:ScenePtr scene_;

	/**
	* @brief The Dynamicline Object defining the line of the trajectory
	*/
	private:DynamicLines *line;

	public:boost::thread draw;

	
	class range_TrajectoryRequestListener : public DDSDataReaderListener {
	public: gazebo::rendering::Trajectory* plugin;
	  
	  public: range_TrajectoryRequestListener(Trajectory* pl){
	    plugin = pl;
	  }
	 
	  virtual void on_data_available(DDSDataReader* reader);
      };
	
	
	private: int Trajectory_init(int domainId, char* topicName)
	{
	    DDSDomainParticipant *participant = NULL;
	    DDSSubscriber *subscriber = NULL;
	    DDSTopic *topic = NULL;
	    range_TrajectoryRequestListener *reader_listener = NULL; 
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
	    type_name = range_TrajectoryRequestTypeSupport::get_type_name();
	    retcode = range_TrajectoryRequestTypeSupport::register_type(
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
	    reader_listener = new range_TrajectoryRequestListener(this);

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

	

	/**
	* @brief Function that is called when the GUI is loaded. Initializes the Trajectory, resulting in a list that approximates the trajectory.
	* Draws the line, using the list of points laying on the trajectory
	*
	* @param _parent: Pointer to the GUI
	*/
	public: void Load( VisualPtr _parent, sdf::ElementPtr _sdf ) {

		std::cout<<"loading rfid world"<<std::endl;

		this->visual_ = _parent;
		
		Trajectory_init(1,"gazebo_TrajectoryRequest");
		
		//initTrajectory(20,20,10,1,"5-4*cos(5*t)","5-2*sin(5*t)","-10*(t)",1,0);

		//visualise_line();
		

	}
	/**
	* @brief Draws the line between each of the points of the approximated trajectory
	* 
	*/
	public: void visualise_line() { 
	
  		this->line= this->visual_->CreateDynamicLine(RENDERING_LINE_STRIP);
		
		int x = getPointListSize();
	  	for(int i=0;i<x;i++){
		this->line->AddPoint(getPointX(i),getPointY(i),getPointZ(i));
		}
	this->line->setMaterial("Gazebo/Purple");

    	this->line->setVisibilityFlags(GZ_VISIBILITY_GUI);

  	this->line->setVisible(true);
	
	}
	
	public: void drawTrajectory(range_TrajectoryRequest* sample){
	  initTrajectory(20,20,10,sample->voxelWidth,sample->expressionX,sample->expressionY,sample->expressionZ,sample->radius,sample->e);	
	  visualise_line();
	}

  	

};

GZ_REGISTER_VISUAL_PLUGIN(Trajectory)
}
}

void gazebo::rendering::Trajectory::range_TrajectoryRequestListener::on_data_available(DDSDataReader* reader)
{
    range_TrajectoryRequestDataReader *range_TrajectoryRequest_reader = NULL;
    range_TrajectoryRequestSeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    range_TrajectoryRequest_reader = range_TrajectoryRequestDataReader::narrow(reader);
    if (range_TrajectoryRequest_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = range_TrajectoryRequest_reader->take(
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
            plugin->drawTrajectory(&data_seq[i]);
        }
    }

    retcode = range_TrajectoryRequest_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

