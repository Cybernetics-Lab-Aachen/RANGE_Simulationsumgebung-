#include <boost/bind.hpp>
#include "gazebo/physics/physics.hh"
#include "gazebo/common/common.hh"
#include "gazebo/gazebo.hh"
#include <ignition/math/Pose3.hh>
#include <fstream>
#include <string>
#include <iostream>
#include <gazebo/msgs/msgs.hh>
#include <regex>
#include "lib/ApuSpawn/ApuSpawn.h"
#include "lib/ApuSpawn/ApuSpawnSupport.h"

#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

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



class factory : public WorldPlugin
{

private: void subscriber_main(int domainId, char* topicName)
{
    DDSDomainParticipant *participant = NULL;
    DDSSubscriber *subscriber = NULL;
    DDSTopic *topic = NULL;
    gazebo_ApuSpawnListener *reader_listener = NULL; 
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

    }

    /* To customize the subscriber QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    subscriber = participant->create_subscriber(
        DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        printf("create_subscriber error\n");
        subscriber_shutdown(participant);

    }

    /* Register the type before creating the topic */
    type_name = gazebo_ApuSpawnTypeSupport::get_type_name();
    retcode = gazebo_ApuSpawnTypeSupport::register_type(
        participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        subscriber_shutdown(participant);

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

    }

    /* Create a data reader listener */
    reader_listener = new gazebo_ApuSpawnListener(this);

    /* To customize the data reader QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    reader = subscriber->create_datareader(
        topic, DDS_DATAREADER_QOS_DEFAULT, reader_listener,
        DDS_STATUS_MASK_ALL);
    if (reader == NULL) {
        printf("create_datareader error\n");
        subscriber_shutdown(participant);
        delete reader_listener;

    }

}

class gazebo_ApuSpawnListener : public DDSDataReaderListener {
   	public:
     	public: gazebo::factory* plugin;
     	public: gazebo_ApuSpawnListener(factory *pl)
         {
             plugin=pl;
         }
     	virtual void on_data_available(DDSDataReader* reader);     
};




/**
* @brief Spawns a new APU at the given position
*
* @param _parent: Pointer to the world in which the APU should be spawned
* @param x: X-coordinate, referencing the middlepoint of the APU
* @param y: Y-coordinate, referencing the middlepoint of the APU
* @param z: Z-coordinate, referencing the middlepoint of the APU
*
* @return 
*/
   public: void createApu(physics::WorldPtr _parent, double x,double y,double z,int index){
      // Create a new transport node
      transport::NodePtr node(new transport::Node());

      // Initialize the node with the world name
      node->Init(_parent->GetName());

      // Create a publisher on the ~/factory topic
      transport::PublisherPtr factoryPub =
      node->Advertise<msgs::Factory>("~/factory");
      
      // Create the message
      msgs::Factory msg;

      std::string name("apu-"+std::to_string(index));
      std::cout << "Renaming to: " <<name << " \n";

      // Model file into load
      
      sdf::SDFPtr sdf(new sdf::SDF());
      sdf::init(sdf);
	
      const char *homedir;
	
      std::string filename(GetEnv("GAZEBO_SIMULATION") + "/models/apu-model/model.sdf");
      sdf::readFile(filename, sdf);
      sdf::ElementPtr modelElem = sdf->Root()->GetElement("model");
  
      // Set the model name
      modelElem->GetAttribute("name")->SetFromString(name); 
      msg.set_sdf(sdf->ToString());

      
      // Pose to initialize the model to
      msgs::Set(msg.mutable_pose(),
	    ignition::math::Pose3d(
            ignition::math::Vector3d(x, y, z),
            ignition::math::Quaterniond(0, 0, 0)));

      // Send the message
      factoryPub->Publish(msg);
   }

    // Pointer to the model
    private: physics::WorldPtr model;

/**
* @brief Spawns a new APU at the given position
*
* @param _parent: Pointer to the world in which the APU should be spawned
* @param x: X-coordinate, referencing the middlepoint of the APU
* @param y: Y-coordinate, referencing the middlepoint of the APU
* @param z: Z-coordinate, referencing the middlepoint of the APU
*
* @return 
*/
   public: void createApuOrientated(double x,double y,double z,double oX,double oY,double oZ,double oW){


      // Create a new transport node
      transport::NodePtr node(new transport::Node());

      // Initialize the node with the world name
      node->Init(model->GetName());

      // Create a publisher on the ~/factory topic
      transport::PublisherPtr factoryPub =
      node->Advertise<msgs::Factory>("~/factory");

      // Create the message
      msgs::Factory msg;

      // Model file to load
      msg.set_sdf_filename("model://apu-model");
      
      // Pose to initialize the model to
      msgs::Set(msg.mutable_pose(),
          ignition::math::Pose3d(
            ignition::math::Vector3d(x, y, z),
            ignition::math::Quaterniond(oX, oY, oZ,oW)));

      // Send the message
      factoryPub->Publish(msg);
   }




/**
* @brief Returns the string given by an environment variable var
*
* @param var: The name of the environment variable
*
* @return The value of the environment variable as string ($var)
*/
    public: std::string GetEnv( const std::string var ) {
      const char * val = ::getenv( var.c_str() );
      if ( val == 0 ) {
          return "";
      }
      else {
          return val;
      }
    }


/**
* @brief Spawns a number of APUs at the positions denoted in the path/Apu-Init.txt
*
* @param _parent: Pointer to the world in which the APUs should be spawned
* @param path: Path to the Apu-Init.txt file
* @param num: Number of APUs to be spawned
*
*/
   public: void notRandomSpawn(physics::WorldPtr _parent,std::string path,int num){
	std::ifstream file(path);
	std::string str,str2;
	std::getline(file,str);
	std::getline(file,str);

/*Regular expression for a correct definition of an agents coordinates
	Build and tested with www.regex101.com
	Agent[0-9]*:\s*(-?[0-9]*\.*[0-9]*)\s*,{1}\s*(-?[0-9]*\.*[0-9]*)\s*,{1}\s*(-?[0-9]*\.*[0-9]*)
	and testing text:
		Number of Agents: 12
		Random Spawn: false
		Agent1: 0.5 , 0.87,0.0
		Agent2: -1.0 ,0.0, 0.0
*/
	std::regex rgx("Agent[0-9]*:[ ]*(-?[0-9]*.*[0-9]*)[ ]*,{1}[ ]*(-?[0-9]*.*[0-9]*)[ ]*,{1}[ ]*(-?[0-9]*.*[0-9]*)");
	std::smatch match;
   	int x = 0;
	for(x;x<num;x++){
		std::getline(file,str);
		double X=0;
		double Y=0;
		double Z=0;

		char* next;
		
		if(std::regex_search(str,match,rgx)){
			X = std::strtod(match[1].str().c_str(),&next);
			Y = std::strtod(match[2].str().c_str(),&next);
			Z = std::strtod(match[3].str().c_str(),&next);
			std::cout << "Spawn APU at: " << X << " " << Y << " " << Z << std::endl;
		}
		std::cout << "Spawn: " << X << " " << Y << " " << Z << std::endl;
		createApu(_parent,X,Y,Z,x);
	}

   }


/**
* @brief Spawns a fixed number of APUs at random positions, with x and y between -10 and 10 and z=5
*
* @param _parent: Pointer to the world in which the APUs should be spawned
* @param num: Number of APUs
*
*/
   public: void randomSpawn(physics::WorldPtr _parent,int num){

	int x = 0;
	for(x;x<num;x++){
		createApu(_parent,rand()%20-10,rand()%20-10,5,x);
	}
   }

 

/**
* @brief Function to be called when the world is loaded. Parses the File, checks if it is random or not random spawn and
* calls the corresponding function
*
* @param _parent: Pointer to the World
*
*/
  public: void Load(physics::WorldPtr _parent, sdf::ElementPtr _sdf){
	this->model = _parent;
 	std::string path(GetEnv("GAZEBO_SIMULATION")+"/world/ApuInit.txt");
 	 	
 	std::ifstream file(path);
	std::string str;
	
	if(!file)printf("Error while reading file");
	std::getline(file,str);
	
	std::size_t pos = str.find(": ");
	std::string str2 = str.substr(pos+2);
	int numAgents = std::stoi(str2.c_str());

	std::getline(file,str);
	std::size_t pos1 = str.find(": ");
	std::string str3 = str.substr(pos1+2);
	if(str3.compare("true")==0){
		printf("Random spawn: true\n");
		randomSpawn(_parent,numAgents);
	}
	
	else if(str3.compare("false")==0){
		printf("Random spawn: false\n");
		notRandomSpawn(_parent,path,numAgents);
	}

	char* topic = "gazebo_ApuSpawn";
	subscriber_main(1,topic);

   }
};
GZ_REGISTER_WORLD_PLUGIN(factory)
}


void gazebo::factory::gazebo_ApuSpawnListener::on_data_available(DDSDataReader* reader)
{
    gazebo_ApuSpawnDataReader *gazebo_ApuSpawn_reader = NULL;
    gazebo_ApuSpawnSeq data_seq;
    DDS_SampleInfoSeq info_seq;
    DDS_ReturnCode_t retcode;
    int i;

    gazebo_ApuSpawn_reader = gazebo_ApuSpawnDataReader::narrow(reader);
    if (gazebo_ApuSpawn_reader == NULL) {
        printf("DataReader narrow error\n");
        return;
    }

    retcode = gazebo_ApuSpawn_reader->take(
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
            std::cout << "Recieved Spawn Request \n";
		plugin->createApuOrientated((double) data_seq[i].position.x,(double) data_seq[i].position.y,(double) data_seq[i].position.z,
			(double) data_seq[i].orientation.x,(double) data_seq[i].orientation.y,(double) data_seq[i].orientation.z,(double) data_seq[i].orientation.w);
        }
    }

    retcode = gazebo_ApuSpawn_reader->return_loan(data_seq, info_seq);
    if (retcode != DDS_RETCODE_OK) {
        printf("return loan error %d\n", retcode);
    }
}

