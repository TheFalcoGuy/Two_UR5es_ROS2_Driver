# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller

# Include any dependencies generated for this target.
include CMakeFiles/test_accumulator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_accumulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_accumulator.dir/flags.make

CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.o: CMakeFiles/test_accumulator.dir/flags.make
CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.o: /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller/test/test_accumulator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.o -c /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller/test/test_accumulator.cpp

CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller/test/test_accumulator.cpp > CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.i

CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller/test/test_accumulator.cpp -o CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.s

# Object files for target test_accumulator
test_accumulator_OBJECTS = \
"CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.o"

# External object files for target test_accumulator
test_accumulator_EXTERNAL_OBJECTS =

test_accumulator: CMakeFiles/test_accumulator.dir/test/test_accumulator.cpp.o
test_accumulator: CMakeFiles/test_accumulator.dir/build.make
test_accumulator: gmock/libgmock_main.a
test_accumulator: gmock/libgmock.a
test_accumulator: CMakeFiles/test_accumulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_accumulator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_accumulator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_accumulator.dir/build: test_accumulator

.PHONY : CMakeFiles/test_accumulator.dir/build

CMakeFiles/test_accumulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_accumulator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_accumulator.dir/clean

CMakeFiles/test_accumulator.dir/depend:
	cd /home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller /home/d-lab/workspace/ros_ur_driver/src/ros2_controllers/diff_drive_controller /home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller /home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller /home/d-lab/workspace/ros_ur_driver/src/build/diff_drive_controller/CMakeFiles/test_accumulator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_accumulator.dir/depend
