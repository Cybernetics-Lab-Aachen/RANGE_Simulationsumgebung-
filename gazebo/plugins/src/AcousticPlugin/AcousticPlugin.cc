#include <ignition/math/Pose3.hh>
#include "gazebo/physics/physics.hh"
#include "gazebo/common/common.hh"
#include "gazebo/gazebo.hh"
#include "gazebo/sensors/sensors.hh"

#include <cstring>

#include "lib/RuntimeRequest/RuntimeRequest.h"
#include "lib/RuntimeRequest/RuntimeRequestSupport.h"
#include "lib/AcousticRuntime/AcousticRuntime_publisher.h"

#include "AcousticModel.h"

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
      return status;
  }


class AcousticPlugin : public WorldPlugin
{
  
 private: int RuntimeRequestSub_init(int domainId, char* topicName)
    {
	DDSDomainParticipant *participant = NULL;
	DDSSubscriber *subscriber = NULL;
	DDSTopic *topic = NULL;
	gazebo_RuntimeRequestListener *reader_listener = NULL; 
	DDSDataReader *reader = NULL;
	DDS_ReturnCode_t retcode;
	const char *type_name = NULL;
	int count = 0;
	DDS_Duration_t receive_period = {4,0};
	int status = 0;
	
	 //fix because we reach the resource limit with more then 11 participants
	 //https://community.rti.com/kb/how-many-domain-participants-can-be-created-single-address-space
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
	type_name = gazebo_RuntimeRequestTypeSupport::get_type_name();
	retcode = gazebo_RuntimeRequestTypeSupport::register_type(
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
	reader_listener = new gazebo_RuntimeRequestListener(this);

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
    
    
    class gazebo_RuntimeRequestListener : public DDSDataReaderListener {
	public:	   gazebo::AcousticPlugin* plugin; 
	public:    virtual void on_data_available(DDSDataReader* reader);
	public:    gazebo_RuntimeRequestListener(AcousticPlugin* pl){
	    plugin=pl;
	}
    };
/********************************************************************************************************************************/
    
  physics::WorldPtr world;

  public: void Load(physics::WorldPtr _parent, sdf::ElementPtr /*_sdf*/)
  {
      world = _parent;
      
      AcousticRuntimePublisher_main(1,"gazebo_AcousticRuntime");
      RuntimeRequestSub_init(1,"gazebo_RuntimeRequest");
      
      
  }
  
  public: void writeRuntime(double delay,gazebo::math::Pose poseA, gazebo::math::Pose poseB, char* apuA, char* apuB){
      gazebo_AcousticRuntime* instance = gazebo_AcousticRuntimeTypeSupport::create_data();
      
      printf("Write Runtime\n");
      
      strcpy(instance->apu_a.id,apuA);
      strcpy(instance->apu_b.id,apuB);
      
      instance->delay=delay;
      
      instance->apu_a.pos.x = poseA.pos.x;
      instance->apu_a.pos.y = poseA.pos.y;
      instance->apu_a.pos.z = poseA.pos.z;
      
      instance->apu_a.orie.x = poseA.rot.x;
      instance->apu_a.orie.y = poseA.rot.y;
      instance->apu_a.orie.z = poseA.rot.z;
      instance->apu_a.orie.w = poseA.rot.w;
      
      instance->apu_b.pos.x = poseB.pos.x;
      instance->apu_b.pos.y = poseB.pos.y;
      instance->apu_b.pos.z = poseB.pos.z;
      
      instance->apu_b.orie.x = poseB.rot.x;
      instance->apu_b.orie.y = poseB.rot.y;
      instance->apu_b.orie.z = poseB.rot.z;
      instance->apu_b.orie.w = poseB.rot.w;
      
      
      
      AcousticRuntime_write(instance);
  
    
  }

  
  
  public: void onRTIUpdate(gazebo_RuntimeRequest *sample){
      if ((sample->apu_a != NULL) && (sample->apu_a[0] == '\0')) {
	printf("apu_a is empty\n");
	return;
      }
      if ((sample->apu_b != NULL) && (sample->apu_b[0] == '\0')) {
	printf("apu_a is empty\n");
	return;
      }

      gazebo::physics::ModelPtr apuA = world->GetModel(sample->apu_a);
      gazebo::physics::ModelPtr apuB = world->GetModel(sample->apu_b);
      
      if(apuA == NULL || apuB == NULL){
	printf("Model not founde \n");
	return;
      }
      
      
      sensors::SensorPtr model_sensor = sensors::get_sensor("enceladus::" + apuA->GetName() + "::link::laser");
      
    
      
      if(model_sensor==NULL){
            std::cout << "Sensor not found with name: enceladus::" << apuA->GetName() << "::link::laser\n";
            return;
      }
      sensors::RaySensorPtr ray_sensor = std::dynamic_pointer_cast<sensors::RaySensor>(model_sensor);
      
      
      gazebo::math::Pose poseA = apuA->GetWorldPose();
      gazebo::math::Pose poseB = apuB->GetWorldPose();
      
      double delay = getDelay(apuA,poseA,poseB,ray_sensor);
      std::cout << "Writing runtime from " << sample->apu_a << " to " << sample->apu_b << std::endl;  
      
      writeRuntime(delay,poseA,poseB,sample->apu_a,sample->apu_b);
  }
};

// Register this plugin with the simulator
GZ_REGISTER_WORLD_PLUGIN(AcousticPlugin)
}


/***************************************************************************************************************************************/


void gazebo::AcousticPlugin::gazebo_RuntimeRequestListener::on_data_available(DDSDataReader* reader)
{
    gazebo_RuntimeRequestDataReader *gazebo_RuntimeRequest_reader = NULL;
    gazebo_RuntimeRequestSeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    gazebo_RuntimeRequest_reader = gazebo_RuntimeRequestDataReader::narrow(reader);
    if (gazebo_RuntimeRequest_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = gazebo_RuntimeRequest_reader->take(
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

    retcode = gazebo_RuntimeRequest_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}
