# CMake generated Testfile for 
# Source directory: /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/imu_sensor_broadcaster
# Build directory: /home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_load_imu_sensor_broadcaster "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_results/imu_sensor_broadcaster/test_load_imu_sensor_broadcaster.gtest.xml" "--package-name" "imu_sensor_broadcaster" "--output-file" "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/ament_cmake_gmock/test_load_imu_sensor_broadcaster.txt" "--command" "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_load_imu_sensor_broadcaster" "--gtest_output=xml:/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_results/imu_sensor_broadcaster/test_load_imu_sensor_broadcaster.gtest.xml")
set_tests_properties(test_load_imu_sensor_broadcaster PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_load_imu_sensor_broadcaster" TIMEOUT "60" WORKING_DIRECTORY "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/imu_sensor_broadcaster/CMakeLists.txt;71;ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/imu_sensor_broadcaster/CMakeLists.txt;0;")
add_test(test_imu_sensor_broadcaster "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_results/imu_sensor_broadcaster/test_imu_sensor_broadcaster.gtest.xml" "--package-name" "imu_sensor_broadcaster" "--output-file" "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/ament_cmake_gmock/test_imu_sensor_broadcaster.txt" "--command" "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_imu_sensor_broadcaster" "--gtest_output=xml:/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_results/imu_sensor_broadcaster/test_imu_sensor_broadcaster.gtest.xml")
set_tests_properties(test_imu_sensor_broadcaster PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster/test_imu_sensor_broadcaster" TIMEOUT "60" WORKING_DIRECTORY "/home/d-lab/workspace/ros_ur_driver/src/build/imu_sensor_broadcaster" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/imu_sensor_broadcaster/CMakeLists.txt;84;ament_add_gmock;/home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/imu_sensor_broadcaster/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
