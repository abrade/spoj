# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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
CMAKE_SOURCE_DIR = /home/alex/spoj/arith

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/spoj/arith

# Include any dependencies generated for this target.
include CMakeFiles/arith.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arith.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arith.dir/flags.make

CMakeFiles/arith.dir/main.cpp.o: CMakeFiles/arith.dir/flags.make
CMakeFiles/arith.dir/main.cpp.o: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/spoj/arith/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/arith.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/arith.dir/main.cpp.o -c /home/alex/spoj/arith/main.cpp

CMakeFiles/arith.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arith.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/alex/spoj/arith/main.cpp > CMakeFiles/arith.dir/main.cpp.i

CMakeFiles/arith.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arith.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/alex/spoj/arith/main.cpp -o CMakeFiles/arith.dir/main.cpp.s

CMakeFiles/arith.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/arith.dir/main.cpp.o.requires

CMakeFiles/arith.dir/main.cpp.o.provides: CMakeFiles/arith.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/arith.dir/build.make CMakeFiles/arith.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/arith.dir/main.cpp.o.provides

CMakeFiles/arith.dir/main.cpp.o.provides.build: CMakeFiles/arith.dir/main.cpp.o

# Object files for target arith
arith_OBJECTS = \
"CMakeFiles/arith.dir/main.cpp.o"

# External object files for target arith
arith_EXTERNAL_OBJECTS =

arith: CMakeFiles/arith.dir/main.cpp.o
arith: CMakeFiles/arith.dir/build.make
arith: CMakeFiles/arith.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable arith"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arith.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arith.dir/build: arith
.PHONY : CMakeFiles/arith.dir/build

CMakeFiles/arith.dir/requires: CMakeFiles/arith.dir/main.cpp.o.requires
.PHONY : CMakeFiles/arith.dir/requires

CMakeFiles/arith.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arith.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arith.dir/clean

CMakeFiles/arith.dir/depend:
	cd /home/alex/spoj/arith && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/spoj/arith /home/alex/spoj/arith /home/alex/spoj/arith /home/alex/spoj/arith /home/alex/spoj/arith/CMakeFiles/arith.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arith.dir/depend
