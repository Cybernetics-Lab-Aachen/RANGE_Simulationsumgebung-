#include <stdio.h>
#include <stdlib.h>
#include <ndds/ndds_cpp.h>
#include "Return.h"
#include "ReturnSupport.h"

typedef void (*Return_Callback) (range_Return* sample);
int ReturnSubscriber_init(int domainId, char* topicName, Return_Callback Return_Pointer);