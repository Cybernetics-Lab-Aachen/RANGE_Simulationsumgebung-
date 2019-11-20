

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})



set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../lib/gazebo")

link_directories("$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
include_directories("$ENV{NDDSHOME}/include")
include_directories("$ENV{NDDSHOME}/include/ndds")
include_directories("/usr/include/muParser")



add_library(Trajectory SHARED 
  Trajectory.cc
  trajectory_handler.cc
  lib/MuParser/muParser.cpp
  lib/MuParser/muParserBase.cpp
  lib/MuParser/muParserBytecode.cpp
  lib/MuParser/muParserCallback.cpp
  lib/MuParser/muParserError.cpp
  lib/MuParser/muParserTokenReader.cpp

  lib/TrajectoryRequest/TrajectoryRequest.cxx
  lib/TrajectoryRequest/TrajectoryRequestPlugin.cxx
  lib/TrajectoryRequest/TrajectoryRequestSupport.cxx
)


find_library(nddscppz nddscz nddscorez "$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
target_link_libraries(Trajectory ${GAZEBO_LIBRARIES} nddscppz nddscz nddscorez)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS} -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT")


