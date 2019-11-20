cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../lib/gazebo")

link_directories("$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
include_directories("$ENV{NDDSHOME}/include")
include_directories("$ENV{NDDSHOME}/include/ndds")



 

add_library(PositionPlugin SHARED 
  PositionPlugin.cc
  lib/RTI_Localization/Localization_publisher.cxx 
  lib/RTI_Localization/LocalizationSupport.cxx 
  lib/RTI_Localization/Localization.cxx 
  lib/RTI_Localization/LocalizationPlugin.cxx
  lib/PositionPlugin/PositionPlugin.cxx
  lib/PositionPlugin/PositionPluginSupport.cxx
  lib/PositionPlugin/PositionPluginPlugin.cxx
  lib/Return/Return.cxx
  lib/Return/Return_publisher.cxx
  lib/Return/ReturnSupport.cxx
  lib/Return/ReturnPlugin.cxx
  )

find_library(nddscppz nddscz nddscorez "$ENV{NDDSHOME}/lib/x64Linux3gcc4.8.2")
target_link_libraries(PositionPlugin ${GAZEBO_LIBRARIES} nddscppz nddscz nddscorez)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS} -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT")
