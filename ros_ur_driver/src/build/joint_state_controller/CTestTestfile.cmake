# CMake generated Testfile for 
# Source directory: /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/joint_state_controller
# Build directory: /home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_load_joint_state_controller "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller/test_results/joint_state_controller/test_load_joint_state_controller.gtest.xml" "--package-name" "joint_state_controller" "--output-file" "/home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller/ament_cmake_gmock/test_load_joint_state_controller.txt" "--command" "/home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller/test_load_joint_state_controller" "--gtest_output=xml:/home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller/test_results/joint_state_controller/test_load_joint_state_controller.gtest.xml")
set_tests_properties(test_load_joint_state_controller PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller/test_load_joint_state_controller" TIMEOUT "60" WORKING_DIRECTORY "/home/d-lab/workspace/ros_ur_driver/src/build/joint_state_controller" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/joint_state_controller/CMakeLists.txt;46;ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/joint_state_controller/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
