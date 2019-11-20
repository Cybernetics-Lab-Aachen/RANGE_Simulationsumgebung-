#include <stdio.h>
#include <stdlib.h>
#include "ApuSpawn.h"
#include "ApuSpawnSupport.h"
#include <ndds/ndds_cpp.h>

void ApuSpawnWrite(double x, double y, double z);
int ApuSpawnPublisher_init(int domainId, char* topicName);
