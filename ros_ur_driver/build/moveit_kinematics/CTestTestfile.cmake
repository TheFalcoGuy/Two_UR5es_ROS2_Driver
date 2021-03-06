# CMake generated Testfile for 
# Source directory: /home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_kinematics
# Build directory: /home/d-lab/workspace/ros_ur_driver/build/moveit_kinematics
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/d-lab/workspace/ros_ur_driver/build/moveit_kinematics/test_results/moveit_kinematics/lint_cmake.xunit.xml" "--package-name" "moveit_kinematics" "--output-file" "/home/d-lab/workspace/ros_ur_driver/build/moveit_kinematics/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/foxy/bin/ament_lint_cmake" "--xunit-file" "/home/d-lab/workspace/ros_ur_driver/build/moveit_kinematics/test_results/moveit_kinematics/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_kinematics" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_kinematics/CMakeLists.txt;88;ament_package;/home/d-lab/workspace/ros_ur_driver/src/moveit2/moveit_kinematics/CMakeLists.txt;0;")
subdirs("cached_ik_kinematics_plugin")
subdirs("ikfast_kinematics_plugin")
subdirs("kdl_kinematics_plugin")
subdirs("lma_kinematics_plugin")
subdirs("srv_kinematics_plugin")
subdirs("test")
