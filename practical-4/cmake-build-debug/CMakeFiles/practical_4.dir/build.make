# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/practical_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practical_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practical_4.dir/flags.make

CMakeFiles/practical_4.dir/main.cpp.o: CMakeFiles/practical_4.dir/flags.make
CMakeFiles/practical_4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practical_4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/practical_4.dir/main.cpp.o -c /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/main.cpp

CMakeFiles/practical_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practical_4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/main.cpp > CMakeFiles/practical_4.dir/main.cpp.i

CMakeFiles/practical_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practical_4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/main.cpp -o CMakeFiles/practical_4.dir/main.cpp.s

# Object files for target practical_4
practical_4_OBJECTS = \
"CMakeFiles/practical_4.dir/main.cpp.o"

# External object files for target practical_4
practical_4_EXTERNAL_OBJECTS =

practical_4: CMakeFiles/practical_4.dir/main.cpp.o
practical_4: CMakeFiles/practical_4.dir/build.make
practical_4: CMakeFiles/practical_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practical_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practical_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practical_4.dir/build: practical_4

.PHONY : CMakeFiles/practical_4.dir/build

CMakeFiles/practical_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practical_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practical_4.dir/clean

CMakeFiles/practical_4.dir/depend:
	cd /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4 /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4 /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug /Users/rossguthery/Documents/GitHub/dsba-cpp-practicals/practical-4/cmake-build-debug/CMakeFiles/practical_4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practical_4.dir/depend

