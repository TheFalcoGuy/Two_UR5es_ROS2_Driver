# CMake generated Testfile for 
# Source directory: /home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_core/robot_model
# Build directory: /home/d-lab/workspace/ros_ur_driver/build/moveit_core/robot_model
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_robot_model "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/d-lab/workspace/ros_ur_driver/build/moveit_core/test_results/moveit_core/test_robot_model.gtest.xml" "--package-name" "moveit_core" "--output-file" "/home/d-lab/workspace/ros_ur_driver/build/moveit_core/ament_cmake_gtest/test_robot_model.txt" "--command" "/home/d-lab/workspace/ros_ur_driver/build/moveit_core/robot_model/test_robot_model" "--gtest_output=xml:/home/d-lab/workspace/ros_ur_driver/build/moveit_core/test_results/moveit_core/test_robot_model.gtest.xml")
set_tests_properties(test_robot_model PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/d-lab/workspace/ros_ur_driver/build/moveit_core/robot_model/test_robot_model" TIMEOUT "60" WORKING_DIRECTORY "/home/d-lab/workspace/ros_ur_driver/build/moveit_core/robot_model" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_core/robot_model/CMakeLists.txt;35;ament_add_gtest;/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_core/robot_model/CMakeLists.txt;0;")
subdirs("../gtest")
