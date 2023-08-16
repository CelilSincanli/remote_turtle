cmake_minimum_required(VERSION 3.0.2)
set(PROJECT_NAME udp_manager)
project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)


catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES udp_manager
 CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(udp_client src/client/udp_client.cpp)
target_link_libraries(udp_client ${catkin_LIBRARIES})

add_executable(udp_server src/server/udp_server.cpp)
target_link_libraries(udp_server ${catkin_LIBRARIES})