set(_AMENT_PACKAGE_NAME "cartesian_compliance_controller")
set(cartesian_compliance_controller_VERSION "0.0.0")
set(cartesian_compliance_controller_MAINTAINER "scherzin <scherzin@fzi.de>")
set(cartesian_compliance_controller_BUILD_DEPENDS "hardware_interface" "pluginlib" "rclcpp" "cartesian_controller_base" "cartesian_motion_controller" "cartesian_force_controller" "controller_interface")
set(cartesian_compliance_controller_BUILDTOOL_DEPENDS "ament_cmake")
set(cartesian_compliance_controller_BUILD_EXPORT_DEPENDS "hardware_interface" "pluginlib" "rclcpp" "cartesian_controller_base" "cartesian_motion_controller" "cartesian_force_controller" "controller_interface")
set(cartesian_compliance_controller_BUILDTOOL_EXPORT_DEPENDS )
set(cartesian_compliance_controller_EXEC_DEPENDS "hardware_interface" "pluginlib" "rclcpp" "cartesian_controller_base" "cartesian_motion_controller" "cartesian_force_controller" "controller_interface")
set(cartesian_compliance_controller_TEST_DEPENDS "ament_lint_common")
set(cartesian_compliance_controller_GROUP_DEPENDS )
set(cartesian_compliance_controller_MEMBER_OF_GROUPS )
set(cartesian_compliance_controller_DEPRECATED "")
set(cartesian_compliance_controller_EXPORT_TAGS)
list(APPEND cartesian_compliance_controller_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND cartesian_compliance_controller_EXPORT_TAGS "<controller_interface plugin=\"cartesian_compliance_controller_plugin.xml\"/>")