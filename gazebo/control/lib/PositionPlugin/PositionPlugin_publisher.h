#include <stdio.h>
#include <stdlib.h>
#include <ndds/ndds_cpp.h>
#include "PositionPlugin.h"
#include "PositionPluginSupport.h"

int getPositionWrite(char* apu);
int setPosition(char* apu, double x, double y, double z, double oX=0, double oY=0, double oZ=0, double w=0);
int meltDown(double depth, double speed, char* apu);
int PositionPluginPublisher_init(int domainId, char* topicName);
