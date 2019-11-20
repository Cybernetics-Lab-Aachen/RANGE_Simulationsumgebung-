
/* Localization_publisher.cxx

A publication of data of type de_dlr_enex_datamodel_range_Localization

This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C++ -example <arch> Localization.idl

Example publication of type de_dlr_enex_datamodel_range_Localization automatically generated by 
'rtiddsgen'. To test them follow these steps:

(1) Compile this file and the example subscription.

(2) Start the subscription with the command
objs/<arch>/Localization_subscriber <domain_id> <sample_count>

(3) Start the publication with the command
objs/<arch>/Localization_publisher <domain_id> <sample_count>

(4) [Optional] Specify the list of discovery initial peers and 
multicast receive addresses via an environment variable or a file 
(in the current working directory) called NDDS_DISCOVERY_PEERS. 

You can run any number of publishers and subscribers programs, and can 
add and remove them dynamically from the domain.

Example:

To run the example application on domain <domain_id>:

On Unix: 

objs/<arch>/Localization_publisher <domain_id> o
objs/<arch>/Localization_subscriber <domain_id> 

On Windows:

objs\<arch>\Localization_publisher <domain_id>  
objs\<arch>\Localization_subscriber <domain_id>    

*/



#include <stdio.h>
#include <stdlib.h>
#include "Localization.h"
#include "LocalizationSupport.h"
#include "ndds/ndds_cpp.h"


de_dlr_enex_datamodel_range_LocalizationDataWriter * LocalizationWriter;


/* Delete all entities */
static int publisher_shutdown(
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

    /* RTI Connext provides finalize_instance() method on
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

extern "C" int LocalizationPublisher_main(int domainId, char* topicName)
{
int sample_count = 0;
    DDSDomainParticipant *participant = NULL;
    DDSPublisher *publisher = NULL;
    DDSTopic *topic = NULL;
    DDSDataWriter *writer = NULL;
    de_dlr_enex_datamodel_range_Localization *instance = NULL;
    DDS_ReturnCode_t retcode;
    DDS_InstanceHandle_t instance_handle = DDS_HANDLE_NIL;
    const char *type_name = NULL;
    int count = 0;  
    DDS_Duration_t send_period = {4,0};
    
        //fix because we reach the resource limit with more then 11 participants
        //https://community.rti.com/kb/how-many-domain-participants-can-be-created-single-address-space
        //
        DDS_DomainParticipantFactoryQos factoryQoS;
        DDSTheParticipantFactory->get_qos(factoryQoS);
        /* increase max_objects_per_thread as needed.
        * The default is 1024 (512 for 4.4c and below). */
        factoryQoS.resource_limits.max_objects_per_thread = 4096;
        DDSTheParticipantFactory->set_qos(factoryQoS);
	

     
    /* To customize participant QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    participant = DDSTheParticipantFactory->create_participant(
        domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
        NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        printf("create_participant error\n");
        publisher_shutdown(participant);
        return -1;
    }
  
    /* To customize publisher QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    publisher = participant->create_publisher(
        DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        printf("create_publisher error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Register type before creating topic */
    type_name = de_dlr_enex_datamodel_range_LocalizationTypeSupport::get_type_name();
    retcode = de_dlr_enex_datamodel_range_LocalizationTypeSupport::register_type(
        participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        printf("register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize topic QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    topic = participant->create_topic(
       topicName,
        type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize data writer QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    writer = publisher->create_datawriter(
        topic, DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (writer == NULL) {
        printf("create_datawriter error\n");
        publisher_shutdown(participant);
        return -1;
    }
    LocalizationWriter = de_dlr_enex_datamodel_range_LocalizationDataWriter::narrow(writer);
    if (LocalizationWriter == NULL) {
        printf("DataWriter narrow error\n");
        publisher_shutdown(participant);
        return -1;
    }
   
    return 0;

}

int localizationPublisher_init(int domainId, char* topicName)
{
    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
    set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
    NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */


    if(LocalizationPublisher_main(domainId, topicName)==0){
	printf("Init successful\n");
	return 0;
    }
    else{
	printf("Init Failed\n");
	return -1;
    }

}

//Recieves an instance of the datastructure, calls the RTI write function and returns the error code
extern "C" DDS_ReturnCode_t localizationPublisher_write(de_dlr_enex_datamodel_range_Localization *instance){
	 DDS_ReturnCode_t retcode;
	 

	 retcode = LocalizationWriter->write(*instance, DDS_HANDLE_NIL);
	 if (retcode != DDS_RETCODE_OK) {
	    printf("Write failed\n");
	 }

	 return retcode;
}
