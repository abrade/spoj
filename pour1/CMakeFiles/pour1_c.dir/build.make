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

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex/spoj/pour1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/spoj/pour1

# Include any dependencies generated for this target.
include CMakeFiles/pour1_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pour1_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pour1_c.dir/flags.make

CMakeFiles/pour1_c.dir/main.c.o: CMakeFiles/pour1_c.dir/flags.make
CMakeFiles/pour1_c.dir/main.c.o: main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/spoj/pour1/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/pour1_c.dir/main.c.o"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/pour1_c.dir/main.c.o   -c /home/alex/spoj/pour1/main.c

CMakeFiles/pour1_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pour1_c.dir/main.c.i"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alex/spoj/pour1/main.c > CMakeFiles/pour1_c.dir/main.c.i

CMakeFiles/pour1_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pour1_c.dir/main.c.s"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alex/spoj/pour1/main.c -o CMakeFiles/pour1_c.dir/main.c.s

CMakeFiles/pour1_c.dir/main.c.o.requires:
.PHONY : CMakeFiles/pour1_c.dir/main.c.o.requires

CMakeFiles/pour1_c.dir/main.c.o.provides: CMakeFiles/pour1_c.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/pour1_c.dir/build.make CMakeFiles/pour1_c.dir/main.c.o.provides.build
.PHONY : CMakeFiles/pour1_c.dir/main.c.o.provides

CMakeFiles/pour1_c.dir/main.c.o.provides.build: CMakeFiles/pour1_c.dir/main.c.o

# Object files for target pour1_c
pour1_c_OBJECTS = \
"CMakeFiles/pour1_c.dir/main.c.o"

# External object files for target pour1_c
pour1_c_EXTERNAL_OBJECTS =

pour1_c: CMakeFiles/pour1_c.dir/main.c.o
pour1_c: CMakeFiles/pour1_c.dir/build.make
pour1_c: CMakeFiles/pour1_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable pour1_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pour1_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pour1_c.dir/build: pour1_c
.PHONY : CMakeFiles/pour1_c.dir/build

CMakeFiles/pour1_c.dir/requires: CMakeFiles/pour1_c.dir/main.c.o.requires
.PHONY : CMakeFiles/pour1_c.dir/requires

CMakeFiles/pour1_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pour1_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pour1_c.dir/clean

CMakeFiles/pour1_c.dir/depend:
	cd /home/alex/spoj/pour1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/spoj/pour1 /home/alex/spoj/pour1 /home/alex/spoj/pour1 /home/alex/spoj/pour1 /home/alex/spoj/pour1/CMakeFiles/pour1_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pour1_c.dir/depend

