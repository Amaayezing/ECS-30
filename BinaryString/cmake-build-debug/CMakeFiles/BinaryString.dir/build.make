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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/maaye/CLionProjects/BinaryString

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BinaryString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryString.dir/flags.make

CMakeFiles/BinaryString.dir/bin_str.c.o: CMakeFiles/BinaryString.dir/flags.make
CMakeFiles/BinaryString.dir/bin_str.c.o: ../bin_str.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BinaryString.dir/bin_str.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BinaryString.dir/bin_str.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/BinaryString/bin_str.c

CMakeFiles/BinaryString.dir/bin_str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BinaryString.dir/bin_str.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/BinaryString/bin_str.c > CMakeFiles/BinaryString.dir/bin_str.c.i

CMakeFiles/BinaryString.dir/bin_str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BinaryString.dir/bin_str.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/BinaryString/bin_str.c -o CMakeFiles/BinaryString.dir/bin_str.c.s

CMakeFiles/BinaryString.dir/bin_str.c.o.requires:

.PHONY : CMakeFiles/BinaryString.dir/bin_str.c.o.requires

CMakeFiles/BinaryString.dir/bin_str.c.o.provides: CMakeFiles/BinaryString.dir/bin_str.c.o.requires
	$(MAKE) -f CMakeFiles/BinaryString.dir/build.make CMakeFiles/BinaryString.dir/bin_str.c.o.provides.build
.PHONY : CMakeFiles/BinaryString.dir/bin_str.c.o.provides

CMakeFiles/BinaryString.dir/bin_str.c.o.provides.build: CMakeFiles/BinaryString.dir/bin_str.c.o


# Object files for target BinaryString
BinaryString_OBJECTS = \
"CMakeFiles/BinaryString.dir/bin_str.c.o"

# External object files for target BinaryString
BinaryString_EXTERNAL_OBJECTS =

BinaryString.exe: CMakeFiles/BinaryString.dir/bin_str.c.o
BinaryString.exe: CMakeFiles/BinaryString.dir/build.make
BinaryString.exe: CMakeFiles/BinaryString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BinaryString.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BinaryString.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryString.dir/build: BinaryString.exe

.PHONY : CMakeFiles/BinaryString.dir/build

CMakeFiles/BinaryString.dir/requires: CMakeFiles/BinaryString.dir/bin_str.c.o.requires

.PHONY : CMakeFiles/BinaryString.dir/requires

CMakeFiles/BinaryString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BinaryString.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BinaryString.dir/clean

CMakeFiles/BinaryString.dir/depend:
	cd /cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/maaye/CLionProjects/BinaryString /cygdrive/c/Users/maaye/CLionProjects/BinaryString /cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/BinaryString/cmake-build-debug/CMakeFiles/BinaryString.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BinaryString.dir/depend

