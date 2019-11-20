#include <stdio.h>
#include <stdlib.h>
#include "ndds/ndds_cpp.h"
#include "Localization.h"
#include "LocalizationSupport.h"
typedef void (*callback_function)(de_dlr_enex_datamodel_range_Localization*);
extern "C" int localizationSubscriber_init(int domainId, char* topicName, callback_function callbackPointer);
