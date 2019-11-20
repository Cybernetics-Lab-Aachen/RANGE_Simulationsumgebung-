cmake_minimum_required(VERSION 2.8 FATAL_ERROR)


find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../lib/gazebo")

add_library(Renaming SHARED Renaming.cc)
target_link_libraries(Renaming ${GAZEBO_LIBRARIES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS} -DRTI_UNIX -DRTI_LINUX -DRTI_64BIT")


