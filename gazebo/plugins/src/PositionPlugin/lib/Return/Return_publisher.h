#include <stdio.h>
#include <stdlib.h>
#include "Return.h"
#include "ReturnSupport.h"
#include "ndds/ndds_cpp.h"

int returnPublisher_init(int domainId, char* topicName);
extern "C" DDS_ReturnCode_t returnPublisher_write(range_Return *instance);
