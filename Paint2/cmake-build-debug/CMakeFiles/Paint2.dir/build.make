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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/maaye/CLionProjects/Paint2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Paint2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Paint2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Paint2.dir/flags.make

CMakeFiles/Paint2.dir/main.c.o: CMakeFiles/Paint2.dir/flags.make
CMakeFiles/Paint2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Paint2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Paint2.dir/main.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/Paint2/main.c

CMakeFiles/Paint2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Paint2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/Paint2/main.c > CMakeFiles/Paint2.dir/main.c.i

CMakeFiles/Paint2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Paint2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/Paint2/main.c -o CMakeFiles/Paint2.dir/main.c.s

CMakeFiles/Paint2.dir/main.c.o.requires:

.PHONY : CMakeFiles/Paint2.dir/main.c.o.requires

CMakeFiles/Paint2.dir/main.c.o.provides: CMakeFiles/Paint2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Paint2.dir/build.make CMakeFiles/Paint2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Paint2.dir/main.c.o.provides

CMakeFiles/Paint2.dir/main.c.o.provides.build: CMakeFiles/Paint2.dir/main.c.o


CMakeFiles/Paint2.dir/getInput.c.o: CMakeFiles/Paint2.dir/flags.make
CMakeFiles/Paint2.dir/getInput.c.o: ../getInput.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Paint2.dir/getInput.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Paint2.dir/getInput.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/Paint2/getInput.c

CMakeFiles/Paint2.dir/getInput.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Paint2.dir/getInput.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/Paint2/getInput.c > CMakeFiles/Paint2.dir/getInput.c.i

CMakeFiles/Paint2.dir/getInput.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Paint2.dir/getInput.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/Paint2/getInput.c -o CMakeFiles/Paint2.dir/getInput.c.s

CMakeFiles/Paint2.dir/getInput.c.o.requires:

.PHONY : CMakeFiles/Paint2.dir/getInput.c.o.requires

CMakeFiles/Paint2.dir/getInput.c.o.provides: CMakeFiles/Paint2.dir/getInput.c.o.requires
	$(MAKE) -f CMakeFiles/Paint2.dir/build.make CMakeFiles/Paint2.dir/getInput.c.o.provides.build
.PHONY : CMakeFiles/Paint2.dir/getInput.c.o.provides

CMakeFiles/Paint2.dir/getInput.c.o.provides.build: CMakeFiles/Paint2.dir/getInput.c.o


CMakeFiles/Paint2.dir/drawLines.c.o: CMakeFiles/Paint2.dir/flags.make
CMakeFiles/Paint2.dir/drawLines.c.o: ../drawLines.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Paint2.dir/drawLines.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Paint2.dir/drawLines.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/Paint2/drawLines.c

CMakeFiles/Paint2.dir/drawLines.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Paint2.dir/drawLines.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/Paint2/drawLines.c > CMakeFiles/Paint2.dir/drawLines.c.i

CMakeFiles/Paint2.dir/drawLines.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Paint2.dir/drawLines.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/Paint2/drawLines.c -o CMakeFiles/Paint2.dir/drawLines.c.s

CMakeFiles/Paint2.dir/drawLines.c.o.requires:

.PHONY : CMakeFiles/Paint2.dir/drawLines.c.o.requires

CMakeFiles/Paint2.dir/drawLines.c.o.provides: CMakeFiles/Paint2.dir/drawLines.c.o.requires
	$(MAKE) -f CMakeFiles/Paint2.dir/build.make CMakeFiles/Paint2.dir/drawLines.c.o.provides.build
.PHONY : CMakeFiles/Paint2.dir/drawLines.c.o.provides

CMakeFiles/Paint2.dir/drawLines.c.o.provides.build: CMakeFiles/Paint2.dir/drawLines.c.o


CMakeFiles/Paint2.dir/board.c.o: CMakeFiles/Paint2.dir/flags.make
CMakeFiles/Paint2.dir/board.c.o: ../board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Paint2.dir/board.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Paint2.dir/board.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/Paint2/board.c

CMakeFiles/Paint2.dir/board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Paint2.dir/board.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/Paint2/board.c > CMakeFiles/Paint2.dir/board.c.i

CMakeFiles/Paint2.dir/board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Paint2.dir/board.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/Paint2/board.c -o CMakeFiles/Paint2.dir/board.c.s

CMakeFiles/Paint2.dir/board.c.o.requires:

.PHONY : CMakeFiles/Paint2.dir/board.c.o.requires

CMakeFiles/Paint2.dir/board.c.o.provides: CMakeFiles/Paint2.dir/board.c.o.requires
	$(MAKE) -f CMakeFiles/Paint2.dir/build.make CMakeFiles/Paint2.dir/board.c.o.provides.build
.PHONY : CMakeFiles/Paint2.dir/board.c.o.provides

CMakeFiles/Paint2.dir/board.c.o.provides.build: CMakeFiles/Paint2.dir/board.c.o


CMakeFiles/Paint2.dir/addAndDelete.c.o: CMakeFiles/Paint2.dir/flags.make
CMakeFiles/Paint2.dir/addAndDelete.c.o: ../addAndDelete.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Paint2.dir/addAndDelete.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Paint2.dir/addAndDelete.c.o   -c /cygdrive/c/Users/maaye/CLionProjects/Paint2/addAndDelete.c

CMakeFiles/Paint2.dir/addAndDelete.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Paint2.dir/addAndDelete.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/maaye/CLionProjects/Paint2/addAndDelete.c > CMakeFiles/Paint2.dir/addAndDelete.c.i

CMakeFiles/Paint2.dir/addAndDelete.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Paint2.dir/addAndDelete.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/maaye/CLionProjects/Paint2/addAndDelete.c -o CMakeFiles/Paint2.dir/addAndDelete.c.s

CMakeFiles/Paint2.dir/addAndDelete.c.o.requires:

.PHONY : CMakeFiles/Paint2.dir/addAndDelete.c.o.requires

CMakeFiles/Paint2.dir/addAndDelete.c.o.provides: CMakeFiles/Paint2.dir/addAndDelete.c.o.requires
	$(MAKE) -f CMakeFiles/Paint2.dir/build.make CMakeFiles/Paint2.dir/addAndDelete.c.o.provides.build
.PHONY : CMakeFiles/Paint2.dir/addAndDelete.c.o.provides

CMakeFiles/Paint2.dir/addAndDelete.c.o.provides.build: CMakeFiles/Paint2.dir/addAndDelete.c.o


# Object files for target Paint2
Paint2_OBJECTS = \
"CMakeFiles/Paint2.dir/main.c.o" \
"CMakeFiles/Paint2.dir/getInput.c.o" \
"CMakeFiles/Paint2.dir/drawLines.c.o" \
"CMakeFiles/Paint2.dir/board.c.o" \
"CMakeFiles/Paint2.dir/addAndDelete.c.o"

# External object files for target Paint2
Paint2_EXTERNAL_OBJECTS =

Paint2.exe: CMakeFiles/Paint2.dir/main.c.o
Paint2.exe: CMakeFiles/Paint2.dir/getInput.c.o
Paint2.exe: CMakeFiles/Paint2.dir/drawLines.c.o
Paint2.exe: CMakeFiles/Paint2.dir/board.c.o
Paint2.exe: CMakeFiles/Paint2.dir/addAndDelete.c.o
Paint2.exe: CMakeFiles/Paint2.dir/build.make
Paint2.exe: CMakeFiles/Paint2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Paint2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Paint2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Paint2.dir/build: Paint2.exe

.PHONY : CMakeFiles/Paint2.dir/build

CMakeFiles/Paint2.dir/requires: CMakeFiles/Paint2.dir/main.c.o.requires
CMakeFiles/Paint2.dir/requires: CMakeFiles/Paint2.dir/getInput.c.o.requires
CMakeFiles/Paint2.dir/requires: CMakeFiles/Paint2.dir/drawLines.c.o.requires
CMakeFiles/Paint2.dir/requires: CMakeFiles/Paint2.dir/board.c.o.requires
CMakeFiles/Paint2.dir/requires: CMakeFiles/Paint2.dir/addAndDelete.c.o.requires

.PHONY : CMakeFiles/Paint2.dir/requires

CMakeFiles/Paint2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Paint2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Paint2.dir/clean

CMakeFiles/Paint2.dir/depend:
	cd /cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/maaye/CLionProjects/Paint2 /cygdrive/c/Users/maaye/CLionProjects/Paint2 /cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug /cygdrive/c/Users/maaye/CLionProjects/Paint2/cmake-build-debug/CMakeFiles/Paint2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Paint2.dir/depend

