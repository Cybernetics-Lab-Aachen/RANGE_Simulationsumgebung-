cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})


link_directories("$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
include_directories("$ENV{NDDSHOME}/include")
include_directories("$ENV{NDDSHOME}/include/ndds")

add_executable(control
   control.cc
   lib/ApuSpawn/ApuSpawn_publisher.cxx
   lib/ApuSpawn/ApuSpawnSupport.cxx
   lib/ApuSpawn/ApuSpawn.cxx
   lib/ApuSpawn/ApuSpawnPlugin.cxx
   lib/Localization/Localization_subscriber.cxx
   lib/Localization/LocalizationSupport.cxx
   lib/Localization/Localization.cxx
   lib/Localization/LocalizationPlugin.cxx
      lib/TrajectoryRequest/TrajectoryRequest_publisher.cxx
   lib/TrajectoryRequest/TrajectoryRequestSupport.cxx
   lib/TrajectoryRequest/TrajectoryRequest.cxx
   lib/TrajectoryRequest/TrajectoryRequestPlugin.cxx
   lib/MeltResponse/Return_subscriber.cxx
   lib/MeltResponse/ReturnSupport.cxx
   lib/MeltResponse/Return.cxx
   lib/MeltResponse/ReturnPlugin.cxx
   lib/PositionPlugin/PositionPlugin.cxx
   lib/PositionPlugin/PositionPlugin_publisher.cxx
   lib/PositionPlugin/PositionPluginPlugin.cxx
   lib/PositionPlugin/PositionPluginSupport.cxx
   )

find_library(nddscppz nddscz nddscorez "$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
target_link_libraries(control ${GAZEBO_LIBRARIES} nddscppz nddscz nddscorez ${CMAKE_DL_LIBS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS} -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT")

