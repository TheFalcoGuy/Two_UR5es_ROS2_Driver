cmake_minimum_required(VERSION 3.5)
project(move_arm)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(moveit REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(eigen3_cmake_module REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_visual_tools REQUIRED)
find_package(rviz_visual_tools REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(Eigen3)
find_package(rosidl_default_generators REQUIRED)
find_package(move_arm_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/MoveArm.action"
)

add_executable(move_to_point src/move_to_point.cpp)
add_executable(server src/move_arm_server.cpp)
ament_target_dependencies(server rclcpp std_msgs moveit Eigen3 moveit_ros_planning_interface moveit_msgs moveit_visual_tools rviz_visual_tools move_arm_interfaces)
#add_executable(moveArmServer src/moveArmServer.cpp)
ament_target_dependencies(move_to_point rclcpp std_msgs moveit Eigen3 moveit_ros_planning_interface moveit_msgs moveit_visual_tools rviz_visual_tools)
#ament_target_dependencies(moveArmServer rclcpp std_msgs moveit Eigen3 moveit_ros_planning_interface moveit_msgs moveit_visual_tools rviz_visual_tools rclcpp_action)

ament_export_dependencies(eigen3_cmake_module)
ament_export_dependencies(Eigen3)


install(TARGETS
  move_to_point server
  DESTINATION lib/${PROJECT_NAME})

  install(DIRECTORY  launch action
  DESTINATION share/${PROJECT_NAME}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
