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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ConversionsTemp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ConversionsTemp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ConversionsTemp.dir/flags.make

CMakeFiles/ConversionsTemp.dir/conversions.c.o: CMakeFiles/ConversionsTemp.dir/flags.make
CMakeFiles/ConversionsTemp.dir/conversions.c.o: ../conversions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ConversionsTemp.dir/conversions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ConversionsTemp.dir/conversions.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/conversions.c

CMakeFiles/ConversionsTemp.dir/conversions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ConversionsTemp.dir/conversions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/conversions.c > CMakeFiles/ConversionsTemp.dir/conversions.c.i

CMakeFiles/ConversionsTemp.dir/conversions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ConversionsTemp.dir/conversions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/conversions.c -o CMakeFiles/ConversionsTemp.dir/conversions.c.s

CMakeFiles/ConversionsTemp.dir/conversions.c.o.requires:

.PHONY : CMakeFiles/ConversionsTemp.dir/conversions.c.o.requires

CMakeFiles/ConversionsTemp.dir/conversions.c.o.provides: CMakeFiles/ConversionsTemp.dir/conversions.c.o.requires
	$(MAKE) -f CMakeFiles/ConversionsTemp.dir/build.make CMakeFiles/ConversionsTemp.dir/conversions.c.o.provides.build
.PHONY : CMakeFiles/ConversionsTemp.dir/conversions.c.o.provides

CMakeFiles/ConversionsTemp.dir/conversions.c.o.provides.build: CMakeFiles/ConversionsTemp.dir/conversions.c.o


# Object files for target ConversionsTemp
ConversionsTemp_OBJECTS = \
"CMakeFiles/ConversionsTemp.dir/conversions.c.o"

# External object files for target ConversionsTemp
ConversionsTemp_EXTERNAL_OBJECTS =

ConversionsTemp.exe: CMakeFiles/ConversionsTemp.dir/conversions.c.o
ConversionsTemp.exe: CMakeFiles/ConversionsTemp.dir/build.make
ConversionsTemp.exe: CMakeFiles/ConversionsTemp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ConversionsTemp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ConversionsTemp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ConversionsTemp.dir/build: ConversionsTemp.exe

.PHONY : CMakeFiles/ConversionsTemp.dir/build

CMakeFiles/ConversionsTemp.dir/requires: CMakeFiles/ConversionsTemp.dir/conversions.c.o.requires

.PHONY : CMakeFiles/ConversionsTemp.dir/requires

CMakeFiles/ConversionsTemp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ConversionsTemp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ConversionsTemp.dir/clean

CMakeFiles/ConversionsTemp.dir/depend:
	cd /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/ConversionsTemp/cmake-build-debug/CMakeFiles/ConversionsTemp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ConversionsTemp.dir/depend
