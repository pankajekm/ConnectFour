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
CMAKE_COMMAND = /home/pankaj/Documents/IDES/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/pankaj/Documents/IDES/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pankaj/CLionProjects/connect-four

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pankaj/CLionProjects/connect-four/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ConnectFour.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ConnectFour.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ConnectFour.dir/flags.make

CMakeFiles/ConnectFour.dir/main.cpp.o: CMakeFiles/ConnectFour.dir/flags.make
CMakeFiles/ConnectFour.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pankaj/CLionProjects/connect-four/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ConnectFour.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConnectFour.dir/main.cpp.o -c /home/pankaj/CLionProjects/connect-four/main.cpp

CMakeFiles/ConnectFour.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConnectFour.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pankaj/CLionProjects/connect-four/main.cpp > CMakeFiles/ConnectFour.dir/main.cpp.i

CMakeFiles/ConnectFour.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConnectFour.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pankaj/CLionProjects/connect-four/main.cpp -o CMakeFiles/ConnectFour.dir/main.cpp.s

CMakeFiles/ConnectFour.dir/ConnectFour.cpp.o: CMakeFiles/ConnectFour.dir/flags.make
CMakeFiles/ConnectFour.dir/ConnectFour.cpp.o: ../ConnectFour.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pankaj/CLionProjects/connect-four/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ConnectFour.dir/ConnectFour.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConnectFour.dir/ConnectFour.cpp.o -c /home/pankaj/CLionProjects/connect-four/ConnectFour.cpp

CMakeFiles/ConnectFour.dir/ConnectFour.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConnectFour.dir/ConnectFour.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pankaj/CLionProjects/connect-four/ConnectFour.cpp > CMakeFiles/ConnectFour.dir/ConnectFour.cpp.i

CMakeFiles/ConnectFour.dir/ConnectFour.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConnectFour.dir/ConnectFour.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pankaj/CLionProjects/connect-four/ConnectFour.cpp -o CMakeFiles/ConnectFour.dir/ConnectFour.cpp.s

# Object files for target ConnectFour
ConnectFour_OBJECTS = \
"CMakeFiles/ConnectFour.dir/main.cpp.o" \
"CMakeFiles/ConnectFour.dir/ConnectFour.cpp.o"

# External object files for target ConnectFour
ConnectFour_EXTERNAL_OBJECTS =

ConnectFour: CMakeFiles/ConnectFour.dir/main.cpp.o
ConnectFour: CMakeFiles/ConnectFour.dir/ConnectFour.cpp.o
ConnectFour: CMakeFiles/ConnectFour.dir/build.make
ConnectFour: CMakeFiles/ConnectFour.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pankaj/CLionProjects/connect-four/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ConnectFour"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ConnectFour.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ConnectFour.dir/build: ConnectFour

.PHONY : CMakeFiles/ConnectFour.dir/build

CMakeFiles/ConnectFour.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ConnectFour.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ConnectFour.dir/clean

CMakeFiles/ConnectFour.dir/depend:
	cd /home/pankaj/CLionProjects/connect-four/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pankaj/CLionProjects/connect-four /home/pankaj/CLionProjects/connect-four /home/pankaj/CLionProjects/connect-four/cmake-build-debug /home/pankaj/CLionProjects/connect-four/cmake-build-debug /home/pankaj/CLionProjects/connect-four/cmake-build-debug/CMakeFiles/ConnectFour.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ConnectFour.dir/depend

