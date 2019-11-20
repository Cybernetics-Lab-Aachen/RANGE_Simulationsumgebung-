#include <stdio.h>
#include <stdlib.h>
#include "Localization.h"
#include "LocalizationSupport.h"
#include <ndds/ndds_cpp.h>

void LocalizationWrite(char* apu, double x, double y, double z);
int LocalizationPublisher_init(int domainId, char* topicName);

