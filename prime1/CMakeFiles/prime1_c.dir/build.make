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
CMAKE_SOURCE_DIR = /home/alex/spoj/prime1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/spoj/prime1

# Include any dependencies generated for this target.
include CMakeFiles/prime1_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prime1_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prime1_c.dir/flags.make

CMakeFiles/prime1_c.dir/main.c.o: CMakeFiles/prime1_c.dir/flags.make
CMakeFiles/prime1_c.dir/main.c.o: main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/spoj/prime1/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/prime1_c.dir/main.c.o"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/prime1_c.dir/main.c.o   -c /home/alex/spoj/prime1/main.c

CMakeFiles/prime1_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prime1_c.dir/main.c.i"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alex/spoj/prime1/main.c > CMakeFiles/prime1_c.dir/main.c.i

CMakeFiles/prime1_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prime1_c.dir/main.c.s"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alex/spoj/prime1/main.c -o CMakeFiles/prime1_c.dir/main.c.s

CMakeFiles/prime1_c.dir/main.c.o.requires:
.PHONY : CMakeFiles/prime1_c.dir/main.c.o.requires

CMakeFiles/prime1_c.dir/main.c.o.provides: CMakeFiles/prime1_c.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/prime1_c.dir/build.make CMakeFiles/prime1_c.dir/main.c.o.provides.build
.PHONY : CMakeFiles/prime1_c.dir/main.c.o.provides

CMakeFiles/prime1_c.dir/main.c.o.provides.build: CMakeFiles/prime1_c.dir/main.c.o

# Object files for target prime1_c
prime1_c_OBJECTS = \
"CMakeFiles/prime1_c.dir/main.c.o"

# External object files for target prime1_c
prime1_c_EXTERNAL_OBJECTS =

prime1_c: CMakeFiles/prime1_c.dir/main.c.o
prime1_c: CMakeFiles/prime1_c.dir/build.make
prime1_c: CMakeFiles/prime1_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable prime1_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prime1_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prime1_c.dir/build: prime1_c
.PHONY : CMakeFiles/prime1_c.dir/build

CMakeFiles/prime1_c.dir/requires: CMakeFiles/prime1_c.dir/main.c.o.requires
.PHONY : CMakeFiles/prime1_c.dir/requires

CMakeFiles/prime1_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prime1_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prime1_c.dir/clean

CMakeFiles/prime1_c.dir/depend:
	cd /home/alex/spoj/prime1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/spoj/prime1 /home/alex/spoj/prime1 /home/alex/spoj/prime1 /home/alex/spoj/prime1 /home/alex/spoj/prime1/CMakeFiles/prime1_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prime1_c.dir/depend

