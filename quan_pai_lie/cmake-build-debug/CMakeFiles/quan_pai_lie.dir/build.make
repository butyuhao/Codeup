# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/quan_pai_lie.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quan_pai_lie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quan_pai_lie.dir/flags.make

CMakeFiles/quan_pai_lie.dir/main.cpp.o: CMakeFiles/quan_pai_lie.dir/flags.make
CMakeFiles/quan_pai_lie.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quan_pai_lie.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quan_pai_lie.dir/main.cpp.o -c /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/main.cpp

CMakeFiles/quan_pai_lie.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quan_pai_lie.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/main.cpp > CMakeFiles/quan_pai_lie.dir/main.cpp.i

CMakeFiles/quan_pai_lie.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quan_pai_lie.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/main.cpp -o CMakeFiles/quan_pai_lie.dir/main.cpp.s

# Object files for target quan_pai_lie
quan_pai_lie_OBJECTS = \
"CMakeFiles/quan_pai_lie.dir/main.cpp.o"

# External object files for target quan_pai_lie
quan_pai_lie_EXTERNAL_OBJECTS =

quan_pai_lie: CMakeFiles/quan_pai_lie.dir/main.cpp.o
quan_pai_lie: CMakeFiles/quan_pai_lie.dir/build.make
quan_pai_lie: CMakeFiles/quan_pai_lie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quan_pai_lie"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quan_pai_lie.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quan_pai_lie.dir/build: quan_pai_lie

.PHONY : CMakeFiles/quan_pai_lie.dir/build

CMakeFiles/quan_pai_lie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quan_pai_lie.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quan_pai_lie.dir/clean

CMakeFiles/quan_pai_lie.dir/depend:
	cd /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug /Users/butyuhao/Documents/GitHub/Codeup/quan_pai_lie/cmake-build-debug/CMakeFiles/quan_pai_lie.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quan_pai_lie.dir/depend
