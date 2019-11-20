#include <stdio.h>
#include <stdlib.h>
#include "Localization.h"
#include "LocalizationSupport.h"
#include <ndds/ndds_cpp.h>

typedef void (*LocalizationCallback)(de_dlr_enex_datamodel_range_Localization* sample);
int LocalizationSubscriber_init(int domainId, char* topicName, LocalizationCallback localizationPointer);