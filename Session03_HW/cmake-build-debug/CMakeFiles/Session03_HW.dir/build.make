# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/88/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/88/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/CLionProjects/cpp1/Session03_HW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Session03_HW.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Session03_HW.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Session03_HW.dir/flags.make

CMakeFiles/Session03_HW.dir/main.cpp.o: CMakeFiles/Session03_HW.dir/flags.make
CMakeFiles/Session03_HW.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Session03_HW.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Session03_HW.dir/main.cpp.o -c /home/user/CLionProjects/cpp1/Session03_HW/main.cpp

CMakeFiles/Session03_HW.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Session03_HW.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/CLionProjects/cpp1/Session03_HW/main.cpp > CMakeFiles/Session03_HW.dir/main.cpp.i

CMakeFiles/Session03_HW.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Session03_HW.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/CLionProjects/cpp1/Session03_HW/main.cpp -o CMakeFiles/Session03_HW.dir/main.cpp.s

# Object files for target Session03_HW
Session03_HW_OBJECTS = \
"CMakeFiles/Session03_HW.dir/main.cpp.o"

# External object files for target Session03_HW
Session03_HW_EXTERNAL_OBJECTS =

Session03_HW: CMakeFiles/Session03_HW.dir/main.cpp.o
Session03_HW: CMakeFiles/Session03_HW.dir/build.make
Session03_HW: CMakeFiles/Session03_HW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Session03_HW"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Session03_HW.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Session03_HW.dir/build: Session03_HW

.PHONY : CMakeFiles/Session03_HW.dir/build

CMakeFiles/Session03_HW.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Session03_HW.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Session03_HW.dir/clean

CMakeFiles/Session03_HW.dir/depend:
	cd /home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/CLionProjects/cpp1/Session03_HW /home/user/CLionProjects/cpp1/Session03_HW /home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug /home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug /home/user/CLionProjects/cpp1/Session03_HW/cmake-build-debug/CMakeFiles/Session03_HW.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Session03_HW.dir/depend

