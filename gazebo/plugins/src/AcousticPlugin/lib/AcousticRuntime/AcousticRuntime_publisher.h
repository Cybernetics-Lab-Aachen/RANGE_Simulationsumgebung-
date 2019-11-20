#include <stdlib.h>
#include <stdio.h>
#include <ndds/ndds_cpp.h>
#include "AcousticRuntime.h"
#include "AcousticRuntimeSupport.h"

int AcousticRuntime_write(gazebo_AcousticRuntime* instance);
int AcousticRuntimePublisher_main(int domainId, char* topicName);