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
CMAKE_SOURCE_DIR = /home/alex/spoj/SHPATH

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/spoj/SHPATH

# Include any dependencies generated for this target.
include CMakeFiles/shpath_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shpath_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shpath_cpp.dir/flags.make

CMakeFiles/shpath_cpp.dir/main.cpp.o: CMakeFiles/shpath_cpp.dir/flags.make
CMakeFiles/shpath_cpp.dir/main.cpp.o: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/spoj/SHPATH/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/shpath_cpp.dir/main.cpp.o"
	/usr/lib64/ccache/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/shpath_cpp.dir/main.cpp.o -c /home/alex/spoj/SHPATH/main.cpp

CMakeFiles/shpath_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shpath_cpp.dir/main.cpp.i"
	/usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/alex/spoj/SHPATH/main.cpp > CMakeFiles/shpath_cpp.dir/main.cpp.i

CMakeFiles/shpath_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shpath_cpp.dir/main.cpp.s"
	/usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/alex/spoj/SHPATH/main.cpp -o CMakeFiles/shpath_cpp.dir/main.cpp.s

CMakeFiles/shpath_cpp.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/shpath_cpp.dir/main.cpp.o.requires

CMakeFiles/shpath_cpp.dir/main.cpp.o.provides: CMakeFiles/shpath_cpp.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/shpath_cpp.dir/build.make CMakeFiles/shpath_cpp.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/shpath_cpp.dir/main.cpp.o.provides

CMakeFiles/shpath_cpp.dir/main.cpp.o.provides.build: CMakeFiles/shpath_cpp.dir/main.cpp.o

# Object files for target shpath_cpp
shpath_cpp_OBJECTS = \
"CMakeFiles/shpath_cpp.dir/main.cpp.o"

# External object files for target shpath_cpp
shpath_cpp_EXTERNAL_OBJECTS =

shpath_cpp: CMakeFiles/shpath_cpp.dir/main.cpp.o
shpath_cpp: CMakeFiles/shpath_cpp.dir/build.make
shpath_cpp: CMakeFiles/shpath_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable shpath_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shpath_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shpath_cpp.dir/build: shpath_cpp
.PHONY : CMakeFiles/shpath_cpp.dir/build

CMakeFiles/shpath_cpp.dir/requires: CMakeFiles/shpath_cpp.dir/main.cpp.o.requires
.PHONY : CMakeFiles/shpath_cpp.dir/requires

CMakeFiles/shpath_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shpath_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shpath_cpp.dir/clean

CMakeFiles/shpath_cpp.dir/depend:
	cd /home/alex/spoj/SHPATH && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/spoj/SHPATH /home/alex/spoj/SHPATH /home/alex/spoj/SHPATH /home/alex/spoj/SHPATH /home/alex/spoj/SHPATH/CMakeFiles/shpath_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shpath_cpp.dir/depend

