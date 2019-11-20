#include <stdlib.h>
#include <stdio.h>
#include <string>

/**
* @brief Initializes the trajectory handler, and creates a list of points, approximating the trajectory given by T(t)=(fX(t),fY(t),fZ(t))
*
* @param sizeX: Size of the Cubic Volume in the x-axis in which the Trajectory takes place in m
* @param sizeY: Size of the Cubic Volume in the y-axis in which the Trajectory takes place in m
* @param sizeZ: Size of the Cubic Volume in the z-axis in which the Trajectory takes place in m
* @param voxelWidth: width of one cubic voxel in m
* @param fX: Function as a string defining the Trajectory in y-z plane
* @param fY: Function as a string defining the Trajectory in x-z plane
* @param fZ: Function as a string defining the Trajectory in x-y plane
* @param radius: Radius of the trajectory in m
* @param e: Expansion factor (Defining how much wider the trajectory is in the end compared to the beginning)
*
* @return 0 if no error occured
*/
int initTrajectory(double sizeX,double sizeY,double sizeZ, double voxelWidth,std::string fX,std::string fY,std::string fZ, double radius, double e);

/**
* @brief Returns the z-coordinate of a point out of the initialized trajectory list
*
* @param i: Index of the point
*
* @return z-coordinate of that point
*/
double getPointZ(int i); 

/**
* @brief Returns the y-coordinate of a point out of the initialized trajectory list
*
* @param i: Index of the point
*
* @return y-coordinate of that point
*/
double getPointY(int i);

/**
* @brief Returns the x-coordinate of a point out of the initialized trajectory list
*
* @param i: Index of the point
*
* @return x-coordinate of that point
*/
double getPointX(int i);


/**
* @brief Returns the size of the list of points approximating the trajectory
*
* @return size in int
*/
int getPointListSize();





