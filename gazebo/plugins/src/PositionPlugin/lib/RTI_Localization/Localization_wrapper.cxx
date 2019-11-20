/* Example File for showing how the RTI Wrapper is used
 * @Daniel Habering
 */

#include  "Localization_Wpublisher.h"
#include "Localization_subscriber.h"


/*
 * Function to fill an instance of the datastructure you want to send and pass it to the RTI Libraries
 * The datastructure is initalized, using a constructor by RTI
 */
extern "C" void writeLocalization(int i){
	de_dlr_enex_datamodel_range_Localization *instance = de_dlr_enex_datamodel_range_LocalizationTypeSupport::create_data();
	instance->relative_position.position.x=i;
	DDS_ReturnCode_t retcode = publisher_write(instance);
	 if (retcode != 1) {
		printf("write error %d\n", retcode);
	 }
	else printf("Write succesfull\n");
}

/*
 * Handler function to be called when there is data avaiable.
 * Has to have a pointer to the datastructure you want to handle as input
 */
extern "C" void handlerWrapper(de_dlr_enex_datamodel_range_Localization* sample){
	int i = sample->relative_position.position.x;
	printf("Recieved data with index: %i",i);
}


int main(int argc, char *argv[]){
	 DDS_Duration_t receive_period = {4,0};
	printf("Starting....................................................,\n");
	
	//creates a new publisher on domain 0, topic test. 
	//Has to be called before calling the write Function initially
	publisher_init(0,"TEST");
	
	//create a new function pointer from our handler function, to pass it to the subscriber initializer
	callback_function pointer = &handlerWrapper;
	
	//creates a new subscriber on domain 0, Topic "TEST" and passes a function pointer, which is called on data avaiable
	subscriber_init(0,"TEST",pointer);
	
	
	int i = 0;
	while(1){
		NDDSUtility::sleep(receive_period);
		
		writeLocalization(i++);
	}
	return 1;
}
