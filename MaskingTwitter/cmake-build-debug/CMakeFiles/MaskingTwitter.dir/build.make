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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MaskingTwitter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MaskingTwitter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MaskingTwitter.dir/flags.make

CMakeFiles/MaskingTwitter.dir/main.c.o: CMakeFiles/MaskingTwitter.dir/flags.make
CMakeFiles/MaskingTwitter.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MaskingTwitter.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MaskingTwitter.dir/main.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/main.c

CMakeFiles/MaskingTwitter.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MaskingTwitter.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/main.c > CMakeFiles/MaskingTwitter.dir/main.c.i

CMakeFiles/MaskingTwitter.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MaskingTwitter.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/main.c -o CMakeFiles/MaskingTwitter.dir/main.c.s

CMakeFiles/MaskingTwitter.dir/main.c.o.requires:

.PHONY : CMakeFiles/MaskingTwitter.dir/main.c.o.requires

CMakeFiles/MaskingTwitter.dir/main.c.o.provides: CMakeFiles/MaskingTwitter.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/MaskingTwitter.dir/build.make CMakeFiles/MaskingTwitter.dir/main.c.o.provides.build
.PHONY : CMakeFiles/MaskingTwitter.dir/main.c.o.provides

CMakeFiles/MaskingTwitter.dir/main.c.o.provides.build: CMakeFiles/MaskingTwitter.dir/main.c.o


# Object files for target MaskingTwitter
MaskingTwitter_OBJECTS = \
"CMakeFiles/MaskingTwitter.dir/main.c.o"

# External object files for target MaskingTwitter
MaskingTwitter_EXTERNAL_OBJECTS =

MaskingTwitter.exe: CMakeFiles/MaskingTwitter.dir/main.c.o
MaskingTwitter.exe: CMakeFiles/MaskingTwitter.dir/build.make
MaskingTwitter.exe: CMakeFiles/MaskingTwitter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MaskingTwitter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MaskingTwitter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MaskingTwitter.dir/build: MaskingTwitter.exe

.PHONY : CMakeFiles/MaskingTwitter.dir/build

CMakeFiles/MaskingTwitter.dir/requires: CMakeFiles/MaskingTwitter.dir/main.c.o.requires

.PHONY : CMakeFiles/MaskingTwitter.dir/requires

CMakeFiles/MaskingTwitter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MaskingTwitter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MaskingTwitter.dir/clean

CMakeFiles/MaskingTwitter.dir/depend:
	cd /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/MaskingTwitter/cmake-build-debug/CMakeFiles/MaskingTwitter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MaskingTwitter.dir/depend
