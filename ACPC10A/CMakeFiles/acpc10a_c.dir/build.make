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
CMAKE_SOURCE_DIR = /home/alex/spoj/ACPC10A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/spoj/ACPC10A

# Include any dependencies generated for this target.
include CMakeFiles/acpc10a_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/acpc10a_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/acpc10a_c.dir/flags.make

CMakeFiles/acpc10a_c.dir/main.c.o: CMakeFiles/acpc10a_c.dir/flags.make
CMakeFiles/acpc10a_c.dir/main.c.o: main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/spoj/ACPC10A/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/acpc10a_c.dir/main.c.o"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/acpc10a_c.dir/main.c.o   -c /home/alex/spoj/ACPC10A/main.c

CMakeFiles/acpc10a_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acpc10a_c.dir/main.c.i"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alex/spoj/ACPC10A/main.c > CMakeFiles/acpc10a_c.dir/main.c.i

CMakeFiles/acpc10a_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acpc10a_c.dir/main.c.s"
	/usr/lib64/ccache/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alex/spoj/ACPC10A/main.c -o CMakeFiles/acpc10a_c.dir/main.c.s

CMakeFiles/acpc10a_c.dir/main.c.o.requires:
.PHONY : CMakeFiles/acpc10a_c.dir/main.c.o.requires

CMakeFiles/acpc10a_c.dir/main.c.o.provides: CMakeFiles/acpc10a_c.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/acpc10a_c.dir/build.make CMakeFiles/acpc10a_c.dir/main.c.o.provides.build
.PHONY : CMakeFiles/acpc10a_c.dir/main.c.o.provides

CMakeFiles/acpc10a_c.dir/main.c.o.provides.build: CMakeFiles/acpc10a_c.dir/main.c.o

# Object files for target acpc10a_c
acpc10a_c_OBJECTS = \
"CMakeFiles/acpc10a_c.dir/main.c.o"

# External object files for target acpc10a_c
acpc10a_c_EXTERNAL_OBJECTS =

acpc10a_c: CMakeFiles/acpc10a_c.dir/main.c.o
acpc10a_c: CMakeFiles/acpc10a_c.dir/build.make
acpc10a_c: CMakeFiles/acpc10a_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable acpc10a_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/acpc10a_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/acpc10a_c.dir/build: acpc10a_c
.PHONY : CMakeFiles/acpc10a_c.dir/build

CMakeFiles/acpc10a_c.dir/requires: CMakeFiles/acpc10a_c.dir/main.c.o.requires
.PHONY : CMakeFiles/acpc10a_c.dir/requires

CMakeFiles/acpc10a_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/acpc10a_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/acpc10a_c.dir/clean

CMakeFiles/acpc10a_c.dir/depend:
	cd /home/alex/spoj/ACPC10A && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/spoj/ACPC10A /home/alex/spoj/ACPC10A /home/alex/spoj/ACPC10A /home/alex/spoj/ACPC10A /home/alex/spoj/ACPC10A/CMakeFiles/acpc10a_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/acpc10a_c.dir/depend
