# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/tysik/Workspace/cpp/programming_challenges

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tysik/Workspace/cpp/programming_challenges/build

# Include any dependencies generated for this target.
include CMakeFiles/string_permutations.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/string_permutations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string_permutations.dir/flags.make

CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o: CMakeFiles/string_permutations.dir/flags.make
CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o: ../string_permutations/string_permutations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tysik/Workspace/cpp/programming_challenges/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o"
	/usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o -c /home/tysik/Workspace/cpp/programming_challenges/string_permutations/string_permutations.cpp

CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.i"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tysik/Workspace/cpp/programming_challenges/string_permutations/string_permutations.cpp > CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.i

CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.s"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tysik/Workspace/cpp/programming_challenges/string_permutations/string_permutations.cpp -o CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.s

CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.requires:

.PHONY : CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.requires

CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.provides: CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.requires
	$(MAKE) -f CMakeFiles/string_permutations.dir/build.make CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.provides.build
.PHONY : CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.provides

CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.provides.build: CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o


# Object files for target string_permutations
string_permutations_OBJECTS = \
"CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o"

# External object files for target string_permutations
string_permutations_EXTERNAL_OBJECTS =

string_permutations: CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o
string_permutations: CMakeFiles/string_permutations.dir/build.make
string_permutations: CMakeFiles/string_permutations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tysik/Workspace/cpp/programming_challenges/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable string_permutations"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string_permutations.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string_permutations.dir/build: string_permutations

.PHONY : CMakeFiles/string_permutations.dir/build

CMakeFiles/string_permutations.dir/requires: CMakeFiles/string_permutations.dir/string_permutations/string_permutations.cpp.o.requires

.PHONY : CMakeFiles/string_permutations.dir/requires

CMakeFiles/string_permutations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/string_permutations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/string_permutations.dir/clean

CMakeFiles/string_permutations.dir/depend:
	cd /home/tysik/Workspace/cpp/programming_challenges/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tysik/Workspace/cpp/programming_challenges /home/tysik/Workspace/cpp/programming_challenges /home/tysik/Workspace/cpp/programming_challenges/build /home/tysik/Workspace/cpp/programming_challenges/build /home/tysik/Workspace/cpp/programming_challenges/build/CMakeFiles/string_permutations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/string_permutations.dir/depend

