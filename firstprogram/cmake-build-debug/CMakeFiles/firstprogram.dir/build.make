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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/maaye/CLionProjects/firstprogram

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/firstprogram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/firstprogram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/firstprogram.dir/flags.make

CMakeFiles/firstprogram.dir/main.c.o: CMakeFiles/firstprogram.dir/flags.make
CMakeFiles/firstprogram.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/firstprogram.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/firstprogram.dir/main.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/firstprogram/main.c

CMakeFiles/firstprogram.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/firstprogram.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/firstprogram/main.c > CMakeFiles/firstprogram.dir/main.c.i

CMakeFiles/firstprogram.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/firstprogram.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/firstprogram/main.c -o CMakeFiles/firstprogram.dir/main.c.s

CMakeFiles/firstprogram.dir/main.c.o.requires:

.PHONY : CMakeFiles/firstprogram.dir/main.c.o.requires

CMakeFiles/firstprogram.dir/main.c.o.provides: CMakeFiles/firstprogram.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/firstprogram.dir/build.make CMakeFiles/firstprogram.dir/main.c.o.provides.build
.PHONY : CMakeFiles/firstprogram.dir/main.c.o.provides

CMakeFiles/firstprogram.dir/main.c.o.provides.build: CMakeFiles/firstprogram.dir/main.c.o


# Object files for target firstprogram
firstprogram_OBJECTS = \
"CMakeFiles/firstprogram.dir/main.c.o"

# External object files for target firstprogram
firstprogram_EXTERNAL_OBJECTS =

firstprogram.exe: CMakeFiles/firstprogram.dir/main.c.o
firstprogram.exe: CMakeFiles/firstprogram.dir/build.make
firstprogram.exe: CMakeFiles/firstprogram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable firstprogram.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firstprogram.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/firstprogram.dir/build: firstprogram.exe

.PHONY : CMakeFiles/firstprogram.dir/build

CMakeFiles/firstprogram.dir/requires: CMakeFiles/firstprogram.dir/main.c.o.requires

.PHONY : CMakeFiles/firstprogram.dir/requires

CMakeFiles/firstprogram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/firstprogram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/firstprogram.dir/clean

CMakeFiles/firstprogram.dir/depend:
	cd /cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/maaye/CLionProjects/firstprogram /cygdrive/c/Users/maaye/CLionProjects/firstprogram /cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/firstprogram/cmake-build-debug/CMakeFiles/firstprogram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/firstprogram.dir/depend

