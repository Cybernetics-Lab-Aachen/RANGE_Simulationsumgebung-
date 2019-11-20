#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "lib/MuParser/muParser.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <map>


using namespace std;


//representing one 3d pixel in our map, with the coordinates of its upper, left, away corner
struct Voxel{
double x;
double y;
double z;
};

//a 3d point, with a manual defined < operator
struct Point{
double x;
double y;
double z;
bool operator<( const Point & n ) const {
   return this->x < n.x && y < n.y && z<n.z;   // for example
 }
};


double sizeOfCubeX;
double sizeOfCubeY;
double sizeOfCubeZ;

double width;
double radius;
double expansion;

mu::Parser pX;
mu::Parser pY;
mu::Parser pZ;

double t;

double trajectoryLength;

//a list of points on the trajectory with corresponding t value
std::map<double,Point> traj;
std::map<double,Point>::iterator it;

//TODO Transformation

//returns the approximated gradient of the trajectory and a given value t
double getDisDeriv(double value){
	double tempNext=value+0.001;
	t=value;
	
	double tempx1 = pX.Eval();
	double tempy1 = pY.Eval();
	double tempz1 = pZ.Eval();
	
	t=tempNext;
	
	double tempx2 = pX.Eval();
	double tempy2 = pY.Eval();
	double tempz2 = pZ.Eval();
	
	double dX = (tempx1-tempx2)/(value-tempNext);
	double dY = (tempy1-tempy2)/(value-tempNext);
	double dZ = (tempz1-tempz2)/(value-tempNext);

	return sqrt(dX*dX+dY*dY+dZ*dZ);

}

//returns an approximated length of the trajectory
double getTrajLength(){
	double result=0;
	double i = 0;
	for(i; i<1; i=i+0.0001){
		result += 0.0001*getDisDeriv(i);
		//cout <<"  " << result << "   " << i << "\n";

	}
	
	return result;
}

//returns the eucledian distance between two points
double getDistance(Point p1, Point p2) {
	double result;
	result = sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z) );
	return result;
}

//returns the next value for t, which is nearly half of the width of a voxel away from the given t 
double getNextT(double value){

	double tempNext=value+(width)/(trajectoryLength*4);
	double dX,dY,dZ;
	t=value;
	Point p1;
	p1.x = pX.Eval();
	p1.y = pY.Eval();
	p1.z = pZ.Eval();
	
	t=tempNext;
	Point p2;
	p2.x = pX.Eval();
	p2.y = pY.Eval();
	p2.z = pZ.Eval();
	
	double diff = ((double)width/4)/getDistance(p1,p2);	

	double result = value+((width)/(trajectoryLength*2))*diff;
	
	return result;
}

//checks if a point is inside the bounds of the cube
//returns 1 if inside the cube
bool inBound(Point p){
	if(p.x > sizeOfCubeX/2 || p.x< (-1*sizeOfCubeX/2)) return false;
	else if(p.y > sizeOfCubeY/2 || p.y< (-1*sizeOfCubeY/2)) return false;
	else if(p.z > sizeOfCubeZ || p.z< (-1*sizeOfCubeZ)) return false;
	else{
		return true;
	}

}

//fills the map with a set of points which have a minimal distance of 1/2*width of voxel on the trajectory
//this set of points represents an approximation of the trajectory
void fillTrajVector(){
	t=0;
	int i = 0;
	Point p;
	while(t<=1.0){
		
		i++;
		
		p.x=pX.Eval();
		p.y=pY.Eval();
		p.z=pZ.Eval();
		
		

		if(!inBound(p)){
			cout << "Trajectory out of Bound \n";
			break;
		}
		
		double x = t;
		traj.insert(make_pair(x,p));
		
		if(t==1) break;	
	
		t=getNextT(t);

		if(t>1) t = 1;

	//	std::cout << "T: " << t << std::endl;
	}

	t = 1;
	p.x=pX.Eval();
	p.y=pY.Eval();
	p.z=pZ.Eval();
	if(!inBound(p)){
	  cout << "Trajectory out of Bound \n";
	 
	}
	else{
	double x = t;
	traj.insert(make_pair(x,p));
	}
	
	printf("Filled Vector with %d Points\n",i);

}


double getPointX(int i){
	it=traj.begin();
	int j = 0;
	for(j=0;j<i;j++){
		it++;
	}
	return it->second.x;
}
double getPointY(int i){
	it=traj.begin();
	int j = 0;
	for(j=0;j<i;j++){
		it++;
	}
	return it->second.y;
}

double getPointZ(int i){
	it=traj.begin();
	int j = 0;
	for(j=0;j<i;j++){
		it++;
	}
	return it->second.z;
}

int getPointListSize(){
	return traj.size();
}

int initTrajectory(double sizeX,double sizeY,double sizeZ, double voxelWidth,string fX,string fY,string fZ, double rad, double e){
	sizeOfCubeX=sizeX;
	sizeOfCubeY=sizeY;
	sizeOfCubeZ=sizeZ;
	traj.clear();

	expansion=e;
	radius=rad;
	
	width=voxelWidth;
	std::cout << "Expression: " << fX << " " << fY << " " << fZ << std::endl;
	//initialize the functions for x,y and z
	pX.DefineVar("t",&t);
	pX.SetExpr(fX);

	pY.DefineVar("t",&t);
	pY.SetExpr(fY);

	pZ.DefineVar("t",&t);
	pZ.SetExpr(fZ);
	
	trajectoryLength=getTrajLength();
	cout << "Lenght of trajectory: " << trajectoryLength << "\n";

	//fill traj vector with points with a distance of width/2
	fillTrajVector();
	return 1;
}



