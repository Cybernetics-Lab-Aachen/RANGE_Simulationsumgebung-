cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../lib/gazebo") 

find_package(gazebo REQUIRED) 
include_directories(${GAZEBO_INCLUDE_DIRS}) 
link_directories(${GAZEBO_LIBRARY_DIRS}) 
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}") 

link_directories("$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
include_directories("$ENV{NDDSHOME}/include")
include_directories("$ENV{NDDSHOME}/include/ndds")

add_library(factory SHARED
   factory.cc
   lib/ApuSpawn/ApuSpawn_subscriber.cxx
   lib/ApuSpawn/ApuSpawnSupport.cxx
   lib/ApuSpawn/ApuSpawn.cxx
   lib/ApuSpawn/ApuSpawnPlugin.cxx) 

find_library(nddscppz nddscz nddscorez "$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
target_link_libraries(factory ${GAZEBO_LIBRARIES} nddscppz nddscz nddscorez)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS} -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT")



