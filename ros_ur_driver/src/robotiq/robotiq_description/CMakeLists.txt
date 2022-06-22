# cmake_minimum_required(VERSION 2.8.3)
cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)

project(robotiq_description)


find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(robot_state_publisher)
find_package(urdf)
find_package(xacro)

install(
  DIRECTORY config launch meshes urdf
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
