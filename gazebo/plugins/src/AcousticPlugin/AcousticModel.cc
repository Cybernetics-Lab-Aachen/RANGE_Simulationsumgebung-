#include "AcousticModel.h"
#include <boost/random.hpp>
#include <boost/random/normal_distribution.hpp>
#include <gazebo/sensors/sensors.hh>
#include <time.h>
#include <ctime>
#include <iostream>
#include <vector>
#include <math.h>
#include <ignition/math/Pose3.hh>


#include <chrono>
#include <thread>
    
#define MEAN_ACOUSTIC_ERROR 25
boost::mt19937 rng;


double getDistance(const gazebo::math::Pose &poseA,const gazebo::math::Pose &poseB ){
    double ret = (poseA.pos.x-poseB.pos.x)*(poseA.pos.x-poseB.pos.x);
    ret += (poseA.pos.y-poseB.pos.y)*(poseA.pos.y-poseB.pos.y);
    ret += (poseA.pos.z-poseB.pos.z)*(poseA.pos.z-poseB.pos.z);
    return sqrt(ret);
}

double getDelay(gazebo::physics::ModelPtr apuA, const gazebo::math::Pose &poseA,const gazebo::math::Pose &poseB, const gazebo::sensors::RaySensorPtr &ray_sensor){
    double ret;
  //  ray_sensor->SetActive(false);
    ignition::math::Pose3d sensorPose = ray_sensor->Pose();
    ignition::math::Vector3d pos = sensorPose.Pos();
    
    double dist = getDistance(poseA,poseB);
    
    
    
    double degXY, degXZ;
    
    degXY = (poseB.pos.x-poseA.pos.x-pos.X());
    if(degXY == 0){
        if(poseB.pos.y-poseA.pos.y-pos.Y()>0)  degXY = 0.5*M_PI;
        else degXY = -0.5*M_PI;
    }
    else {
        degXY = (poseB.pos.y-poseA.pos.y-pos.Y())/degXY;
        if(degXY == 0){
            if(poseB.pos.x-poseA.pos.x-pos.X()>0) degXY = 0;
            else degXY = M_PI;
        }
        else{
            degXY = atan(degXY);
            if((poseB.pos.x-poseA.pos.x-pos.X())<0){
                if(degXY<0){
                    degXY=M_PI+degXY;
                }
                else degXY=degXY-M_PI;
                
            }
            
        } 
    }
  
    
    double diffX = poseA.pos.x-poseB.pos.x-pos.X();
    double diffY = poseA.pos.y-poseB.pos.y-pos.Y();
    
    
    
    double distXY = sqrt(diffX*diffX+diffY*diffY);
    
    degXZ = distXY;
    if(degXZ == 0){
        if(poseA.pos.z-poseB.pos.z-pos.Z()>0) degXZ = 0.5*M_PI;
        else degXZ = -0.5*M_PI;
    }
    else{
        degXZ = (poseA.pos.z-poseB.pos.z-pos.Z())/degXZ;
        
        degXZ = atan(degXZ);
    }
    
    
    ignition::math::Vector3d ori = ignition::math::Vector3d(0,degXZ,degXY);
    
   // sensorPose.Set(pos,ori);
    //std::cout <<"Last Update: " << ray_sensor->LastUpdateTime() << std::endl;
//    ray_sensor->SetPose(sensorPose);
    gazebo::math::Pose pass = gazebo::math::Pose(poseA.pos.x,poseA.pos.y,poseA.pos.z,ori.X(),ori.Y(),ori.Z());
    
  //  std::cout << "Pose: " << pass.pos.x << " " << pass.pos.y << " " << pass.pos.z << " " << ori.X() << " " << ori.Y() << " " << ori.Z() << std::endl;
    
    apuA->SetWorldPose(pass);
    
    ray_sensor->Init();
    ray_sensor->SetActive(true);
    ray_sensor->Update(true);
    
    
    double actDist = ray_sensor->RangeMax();
    
    std::vector<double> ranges;
    ray_sensor->Ranges(ranges);
    
    for(int i = 0; i < ranges.size(); i++){
            if(actDist > ranges[i]){
                    actDist=ranges[i];
            }
    }
 
   apuA->SetWorldPose(poseA);
 
   
   
    std::cout << "Measured Distance: " << actDist << " -- actual Distance: " << dist<< std::endl;
   
   
    //TODO: actDist auf winkel zur Apu anpassen
    if((dist-actDist)/dist>0.2){
        std::cout << "Detected Obstacle\n";
        return 0;
    }
    static unsigned int seed = 0;
    rng.seed((++seed) + time(NULL));
    
    
    double speed = 3250;
    boost::normal_distribution<> del(speed,MEAN_ACOUSTIC_ERROR);
    
    
    boost::variate_generator<boost::mt19937&,boost::normal_distribution<> > var_del(rng,del);
    ret = dist*1000000/var_del();
    
    //std::cout << "Runntime: " << ret << std::endl;
    
    
    return ret;
}
