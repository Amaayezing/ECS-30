# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /cygdrive/c/Users/maaye/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/maaye/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/maaye/CLionProjects/GradeNeed

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GradeNeed.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GradeNeed.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GradeNeed.dir/flags.make

CMakeFiles/GradeNeed.dir/grade_need.c.o: CMakeFiles/GradeNeed.dir/flags.make
CMakeFiles/GradeNeed.dir/grade_need.c.o: ../grade_need.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GradeNeed.dir/grade_need.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/GradeNeed.dir/grade_need.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/grade_need.c

CMakeFiles/GradeNeed.dir/grade_need.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GradeNeed.dir/grade_need.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/grade_need.c > CMakeFiles/GradeNeed.dir/grade_need.c.i

CMakeFiles/GradeNeed.dir/grade_need.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GradeNeed.dir/grade_need.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/grade_need.c -o CMakeFiles/GradeNeed.dir/grade_need.c.s

CMakeFiles/GradeNeed.dir/grade_need.c.o.requires:

.PHONY : CMakeFiles/GradeNeed.dir/grade_need.c.o.requires

CMakeFiles/GradeNeed.dir/grade_need.c.o.provides: CMakeFiles/GradeNeed.dir/grade_need.c.o.requires
	$(MAKE) -f CMakeFiles/GradeNeed.dir/build.make CMakeFiles/GradeNeed.dir/grade_need.c.o.provides.build
.PHONY : CMakeFiles/GradeNeed.dir/grade_need.c.o.provides

CMakeFiles/GradeNeed.dir/grade_need.c.o.provides.build: CMakeFiles/GradeNeed.dir/grade_need.c.o


# Object files for target GradeNeed
GradeNeed_OBJECTS = \
"CMakeFiles/GradeNeed.dir/grade_need.c.o"

# External object files for target GradeNeed
GradeNeed_EXTERNAL_OBJECTS =

GradeNeed.exe: CMakeFiles/GradeNeed.dir/grade_need.c.o
GradeNeed.exe: CMakeFiles/GradeNeed.dir/build.make
GradeNeed.exe: CMakeFiles/GradeNeed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable GradeNeed.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GradeNeed.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GradeNeed.dir/build: GradeNeed.exe

.PHONY : CMakeFiles/GradeNeed.dir/build

CMakeFiles/GradeNeed.dir/requires: CMakeFiles/GradeNeed.dir/grade_need.c.o.requires

.PHONY : CMakeFiles/GradeNeed.dir/requires

CMakeFiles/GradeNeed.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GradeNeed.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GradeNeed.dir/clean

CMakeFiles/GradeNeed.dir/depend:
	cd /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/maaye/CLionProjects/GradeNeed /cygdrive/c/Users/maaye/CLionProjects/GradeNeed /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/GradeNeed/cmake-build-debug/CMakeFiles/GradeNeed.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GradeNeed.dir/depend

