#include <stdio.h>
#include <stdlib.h>
#include "Localization.h"
#include "LocalizationSupport.h"
#include "ndds/ndds_cpp.h"

DDS_ReturnCode_t localizationPublisher_init(int domainId, char* topicName);
extern "C" DDS_ReturnCode_t localizationPublisher_write(de_dlr_enex_datamodel_range_Localization *instance);