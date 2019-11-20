#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstring>
#include "lib/ApuSpawn/ApuSpawn_publisher.h"
#include "lib/Localization/Localization_subscriber.h"
#include "lib/TrajectoryRequest/TrajectoryRequest_publisher.h"
#include "lib/MeltResponse/Return_subscriber.h"
#include "lib/PositionPlugin/PositionPlugin_publisher.h"
#include <time.h>
#include <unistd.h>
#include <limits>

void setVar(int* var, char* name){
    std::cout << name << ": ";
    while(!(std::cin >> *var)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input.  Try again: ";
    }
}
void setVar(double* var, char* name){
    std::cout << name << ": ";
    while(!(std::cin >> *var)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input.  Try again: ";
    }
}

void spawn(){
  std::cout << "-------------------------------------------------------\n";
 double x,y,z;
 setVar(&x,"X");

 setVar(&y,"Y");
 
 setVar(&z,"Z");
 
 ApuSpawnWrite(x,y,z);
  std::cout << std::endl;
}

void trajectory(){
  std::cout << "-------------------------------------------------------\n";
  std::string apu,exX,exY,exZ;
  double rad,e,voxel;
  
  std::cout << "ID: ";
  std::cin >> apu;
  
  std::cout << "fX(t) = ";
  std::cin >> exX;
  
  std::cout << "fY(t) = ";
  std::cin >> exY;
  
  std::cout << "fZ(t) = ";
  std::cin >> exZ;
  
  setVar(&rad,"Radius: ");
  
  setVar(&e,"Expansion factor: ")   ;
  
  setVar(&voxel,"Voxel width: ");
  
  char* cp_apu = new char[apu.length()+1];
  char* cp_exX = new char[exX.length()+1];
  char* cp_exY = new char[exY.length()+1];
  char* cp_exZ = new char[exZ.length()+1];
  
  strcpy(cp_apu,apu.c_str());
  strcpy(cp_exX,exX.c_str());
  strcpy(cp_exY,exY.c_str());
  strcpy(cp_exZ,exZ.c_str());
  
  TrajectoryRequestWrite(cp_apu,cp_exX,cp_exY,cp_exZ,rad,e,voxel);
  std::cout << "-------------------------------------------------------\n";
  
}

void getpos(){
  std::cout << "-------------------------------------------------------\n";
  std::string apu;
  
  std::cout << "ID: ";
  std::cin >> apu;
  
  char* cp_apu = new char[apu.length()+1];
  strcpy(cp_apu,apu.c_str());
  
  getPositionWrite(cp_apu);
  std::cout << "-------------------------------------------------------\n";
}

void meltto(){
  std::cout << "-------------------------------------------------------\n";
  std::string apu;
  double depth,speed;
  
  std::cout << "ID: ";
  std::cin >> apu;
  
  setVar(&depth,"Depth: ");
  
  setVar(&speed,"Speed: ");
  
  char* cp_apu = new char[apu.length()+1];
  strcpy(cp_apu,apu.c_str());
  
  meltDown(depth,speed,cp_apu);
  std::cout << "-------------------------------------------------------\n";
}

void moveto(){
  std::cout << "-------------------------------------------------------\n";
  std::string apu;
  double x,y,z;
    std::cout << "ID: ";
  std::cin >> apu;
  
 setVar(&x,"X");

 setVar(&y,"Y");
 
 setVar(&z,"Z");
 
   char* cp_apu = new char[apu.length()+1];
  strcpy(cp_apu,apu.c_str());
  
 setPosition(cp_apu,x,y,z);
  std::cout << "-------------------------------------------------------\n";
}

void printLocalization(de_dlr_enex_datamodel_range_Localization* sample){
  std::cout << "-------------------------------------------------------\n";
    std::cout << "Position of: " << sample->apu << std::endl;
    std::cout << "X: " << sample->relative_position.position.x << " Y: " << sample->relative_position.position.y << " Z: " << sample->relative_position.position.z << "\n";
    std::cout << "Orientation... \n";
    std::cout << "x: " << sample->relative_position.orientation.x << " y: " << sample->relative_position.orientation.y << " z: " << sample->relative_position.orientation.z << " w: " << sample->relative_position.orientation.w << "\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Input....\n";
}

void ReturnHandler(range_Return* sample){
  std::cout << "-------------------------------------------------------\n";
    std::cout << "Apu: " << sample->id << " Reached the Depth: " << sample->depth << "\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout<< "Input....\n";
}

void testing(){
	    std::string id;
	    int count,amount;
	    
	    setVar(&count,"Number of APUS: ");
	    
	    setVar(&amount,"How often shall each APU melt down: ");
	    
	    
	    double depth = 1;
	    double speed = 50;
	    for(int i = 0; i < amount*count; i++){
		id="apu-";
		id = id+std::to_string((i%count));		
		std::cout << id << "\n";
		char* ptr = new char[id.length()+1];
		strcpy(ptr,id.c_str());
		meltDown(depth,speed,ptr);
		usleep(6000000);
	    }
	     std::cout << "\nInput....\n";
	    
}
int main()
{
	LocalizationSubscriber_init(1,"gazebo_LocalizationAnswer",&printLocalization);
 	ReturnSubscriber_init(1,"gazebo_MeltReturn",&ReturnHandler);
	TrajectoryRequestPublisher_init(1,"gazebo_TrajectoryRequest");
    PositionPluginPublisher_init(1,"gazebo_PositionPlugin");
	ApuSpawnPublisher_init(1,"gazebo_ApuSpawn");
	std::cout << "#########################################################\n\n";
	    std::cout << "   spawn              Spawns an APU at a given coordinate\n";
	    std::cout << "   trajectory         draws a trajectory\n";
	    std::cout << "   getpos             returns the position of an APU\n";
	    std::cout << "   meltto             starts a melting process of an APU\n";
	    std::cout << "   moveto             changes the position of an APU\n";
	    std::cout << "   test               melts a set of apus down\n";
	    
	    std::string input;
	    std::cout << "-------------------------------------------------------\n";
	 
	while(1){
	   
	    
	    
	    std::cin >> input;
	    
	    if(input.compare("spawn")==0) spawn();
	    else if(input.compare("trajectory")==0) trajectory();
	    else if(input.compare("getpos")==0) getpos();
	    else if(input.compare("meltto")==0) meltto();
	    else if(input.compare("moveto")==0) moveto();
	    else if(input.compare("test")==0) testing();
	    else std::cout << "Option not found\n\n ----------------------------------------------";	
	}
	
  
}
