set(_AMENT_PACKAGE_NAME "joint_state_controller")
set(joint_state_controller_VERSION "0.7.0")
set(joint_state_controller_MAINTAINER "Bence Magyar <bence.magyar.robotics@gmail.com>, Jordan Palacios <jordan.palacios@pal-robotics.com>, Karsten Knese <karsten@openrobotics.org>")
set(joint_state_controller_BUILD_DEPENDS "pluginlib" "joint_state_broadcaster")
set(joint_state_controller_BUILDTOOL_DEPENDS "ament_cmake")
set(joint_state_controller_BUILD_EXPORT_DEPENDS "joint_state_broadcaster")
set(joint_state_controller_BUILDTOOL_EXPORT_DEPENDS )
set(joint_state_controller_EXEC_DEPENDS "joint_state_broadcaster")
set(joint_state_controller_TEST_DEPENDS "ament_cmake_gmock" "controller_manager" "hardware_interface" "rclcpp" "ros2_control_test_assets")
set(joint_state_controller_GROUP_DEPENDS )
set(joint_state_controller_MEMBER_OF_GROUPS )
set(joint_state_controller_DEPRECATED "This package has been renamed to joint_state_broadcaster in order to
      differentiate between true controllers and simple data broadcasters.
      This package will be removed in ROS H-Turtle. Instead, use package
      joint_state_broadcaster.")
set(joint_state_controller_EXPORT_TAGS)
list(APPEND joint_state_controller_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND joint_state_controller_EXPORT_TAGS "<deprecated>This package has been renamed to joint_state_broadcaster in order to
      differentiate between true controllers and simple data broadcasters.
      This package will be removed in ROS H-Turtle. Instead, use package
      joint_state_broadcaster.</deprecated>")
