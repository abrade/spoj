# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/spoj/palin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/spoj/palin

# Include any dependencies generated for this target.
include CMakeFiles/palin_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/palin_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/palin_cpp.dir/flags.make

CMakeFiles/palin_cpp.dir/main.cpp.o: CMakeFiles/palin_cpp.dir/flags.make
CMakeFiles/palin_cpp.dir/main.cpp.o: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/spoj/palin/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/palin_cpp.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/palin_cpp.dir/main.cpp.o -c /home/alex/spoj/palin/main.cpp

CMakeFiles/palin_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/palin_cpp.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/alex/spoj/palin/main.cpp > CMakeFiles/palin_cpp.dir/main.cpp.i

CMakeFiles/palin_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/palin_cpp.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/alex/spoj/palin/main.cpp -o CMakeFiles/palin_cpp.dir/main.cpp.s

CMakeFiles/palin_cpp.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/palin_cpp.dir/main.cpp.o.requires

CMakeFiles/palin_cpp.dir/main.cpp.o.provides: CMakeFiles/palin_cpp.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/palin_cpp.dir/build.make CMakeFiles/palin_cpp.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/palin_cpp.dir/main.cpp.o.provides

CMakeFiles/palin_cpp.dir/main.cpp.o.provides.build: CMakeFiles/palin_cpp.dir/main.cpp.o

# Object files for target palin_cpp
palin_cpp_OBJECTS = \
"CMakeFiles/palin_cpp.dir/main.cpp.o"

# External object files for target palin_cpp
palin_cpp_EXTERNAL_OBJECTS =

palin_cpp: CMakeFiles/palin_cpp.dir/main.cpp.o
palin_cpp: CMakeFiles/palin_cpp.dir/build.make
palin_cpp: CMakeFiles/palin_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable palin_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/palin_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/palin_cpp.dir/build: palin_cpp
.PHONY : CMakeFiles/palin_cpp.dir/build

CMakeFiles/palin_cpp.dir/requires: CMakeFiles/palin_cpp.dir/main.cpp.o.requires
.PHONY : CMakeFiles/palin_cpp.dir/requires

CMakeFiles/palin_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/palin_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/palin_cpp.dir/clean

CMakeFiles/palin_cpp.dir/depend:
	cd /home/alex/spoj/palin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/spoj/palin /home/alex/spoj/palin /home/alex/spoj/palin /home/alex/spoj/palin /home/alex/spoj/palin/CMakeFiles/palin_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/palin_cpp.dir/depend
