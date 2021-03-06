set(_AMENT_PACKAGE_NAME "run_move_group")
set(run_move_group_VERSION "2.2.3")
set(run_move_group_MAINTAINER "Henning Kayser <henningkayser@picknik.ai>")
set(run_move_group_BUILD_DEPENDS "moveit_common" "moveit_ros_planning_interface")
set(run_move_group_BUILDTOOL_DEPENDS "ament_cmake")
set(run_move_group_BUILD_EXPORT_DEPENDS "moveit_ros_planning_interface")
set(run_move_group_BUILDTOOL_EXPORT_DEPENDS )
set(run_move_group_EXEC_DEPENDS "controller_manager" "robot_state_publisher" "warehouse_ros_mongo" "tf2_ros" "rviz2" "moveit_ros_move_group" "moveit_resources_panda_moveit_config" "moveit_ros_planning_interface")
set(run_move_group_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(run_move_group_GROUP_DEPENDS )
set(run_move_group_MEMBER_OF_GROUPS )
set(run_move_group_DEPRECATED "")
set(run_move_group_EXPORT_TAGS)
list(APPEND run_move_group_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
