#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "gazebo/gazebo.hh"
#include "gazebo/physics/physics.hh"
#include "gazebo/common/common.hh"

double getDelay(gazebo::physics::ModelPtr apuA,const gazebo::math::Pose &poseA,const gazebo::math::Pose &poseB,const gazebo::sensors::RaySensorPtr &ray_sensor);

