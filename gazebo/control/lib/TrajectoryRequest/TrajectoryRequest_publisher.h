#include <stdlib.h>
#include <stdio.h>
#include <ndds/ndds_cpp.h>
#include "TrajectoryRequest.h"
#include "TrajectoryRequestSupport.h"

void TrajectoryRequestWrite(char* apu, char* exX,char* exY, char* exZ, double rad, double e, double voxelWidth);
int TrajectoryRequestPublisher_init(int domainId, char* topicName);