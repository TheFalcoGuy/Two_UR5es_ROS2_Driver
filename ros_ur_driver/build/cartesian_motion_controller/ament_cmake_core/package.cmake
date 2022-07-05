set(_AMENT_PACKAGE_NAME "cartesian_motion_controller")
set(cartesian_motion_controller_VERSION "0.0.0")
set(cartesian_motion_controller_MAINTAINER "scherzin <scherzin@fzi.de>")
set(cartesian_motion_controller_BUILD_DEPENDS "rclcpp" "cartesian_controller_base")
set(cartesian_motion_controller_BUILDTOOL_DEPENDS )
set(cartesian_motion_controller_BUILD_EXPORT_DEPENDS "rclcpp" "cartesian_controller_base" "controller_interface")
set(cartesian_motion_controller_BUILDTOOL_EXPORT_DEPENDS )
set(cartesian_motion_controller_EXEC_DEPENDS "rclcpp" "cartesian_controller_base" "controller_interface")
set(cartesian_motion_controller_TEST_DEPENDS )
set(cartesian_motion_controller_GROUP_DEPENDS )
set(cartesian_motion_controller_MEMBER_OF_GROUPS )
set(cartesian_motion_controller_DEPRECATED "")
set(cartesian_motion_controller_EXPORT_TAGS)
list(APPEND cartesian_motion_controller_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND cartesian_motion_controller_EXPORT_TAGS "<controller_interface plugin=\"cartesian_motion_controller_plugin.xml\"/>")