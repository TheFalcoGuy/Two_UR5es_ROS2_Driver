# CMake generated Testfile for 
# Source directory: /home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_ros/planning/planning_scene_monitor
# Build directory: /home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/planning_scene_monitor
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(current_state_monitor_tests "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/test_results/moveit_ros_planning/current_state_monitor_tests.gtest.xml" "--package-name" "moveit_ros_planning" "--output-file" "/home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/ament_cmake_gmock/current_state_monitor_tests.txt" "--command" "/home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/planning_scene_monitor/current_state_monitor_tests" "--gtest_output=xml:/home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/test_results/moveit_ros_planning/current_state_monitor_tests.gtest.xml")
set_tests_properties(current_state_monitor_tests PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/planning_scene_monitor/current_state_monitor_tests" TIMEOUT "60" WORKING_DIRECTORY "/home/d-lab/workspace/ros_ur_driver/build/moveit_ros_planning/planning_scene_monitor" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_ros/planning/planning_scene_monitor/CMakeLists.txt;49;ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_ros/planning/planning_scene_monitor/CMakeLists.txt;0;")
subdirs("../gmock")
subdirs("../gtest")
