# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /Users/akshanshgusain/CLionProjects/Final500DSA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Final500DSA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Final500DSA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Final500DSA.dir/flags.make

CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.o: CMakeFiles/Final500DSA.dir/flags.make
CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.o: ../BIT_countingBits.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.o -c /Users/akshanshgusain/CLionProjects/Final500DSA/BIT_countingBits.cpp

CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/akshanshgusain/CLionProjects/Final500DSA/BIT_countingBits.cpp > CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.i

CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/akshanshgusain/CLionProjects/Final500DSA/BIT_countingBits.cpp -o CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.s

CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.o: CMakeFiles/Final500DSA.dir/flags.make
CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.o: ../BIT_countBitsInAllNums.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.o -c /Users/akshanshgusain/CLionProjects/Final500DSA/BIT_countBitsInAllNums.cpp

CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/akshanshgusain/CLionProjects/Final500DSA/BIT_countBitsInAllNums.cpp > CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.i

CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/akshanshgusain/CLionProjects/Final500DSA/BIT_countBitsInAllNums.cpp -o CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.s

# Object files for target Final500DSA
Final500DSA_OBJECTS = \
"CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.o" \
"CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.o"

# External object files for target Final500DSA
Final500DSA_EXTERNAL_OBJECTS =

Final500DSA: CMakeFiles/Final500DSA.dir/BIT_countingBits.cpp.o
Final500DSA: CMakeFiles/Final500DSA.dir/BIT_countBitsInAllNums.cpp.o
Final500DSA: CMakeFiles/Final500DSA.dir/build.make
Final500DSA: CMakeFiles/Final500DSA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Final500DSA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Final500DSA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Final500DSA.dir/build: Final500DSA

.PHONY : CMakeFiles/Final500DSA.dir/build

CMakeFiles/Final500DSA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Final500DSA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Final500DSA.dir/clean

CMakeFiles/Final500DSA.dir/depend:
	cd /Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/akshanshgusain/CLionProjects/Final500DSA /Users/akshanshgusain/CLionProjects/Final500DSA /Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug /Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug /Users/akshanshgusain/CLionProjects/Final500DSA/cmake-build-debug/CMakeFiles/Final500DSA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Final500DSA.dir/depend

