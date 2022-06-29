cmake_minimum_required(VERSION 3.5)
project(ur5_robotiq_moveit_config)

find_package(ament_cmake REQUIRED)
find_package(urdf REQUIRED)
find_package(xacro REQUIRED)


# install(DIRECTORY launch DESTINATION lib/${PROJECT_NAME}
#   PATTERN "setup_assistant.launch" EXCLUDE)
install(DIRECTORY config launch rviz srdf
DESTINATION share/${PROJECT_NAME})

ament_package()