# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/truco.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/truco.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/truco.dir/flags.make

CMakeFiles/truco.dir/tests/test_truco.cpp.obj: CMakeFiles/truco.dir/flags.make
CMakeFiles/truco.dir/tests/test_truco.cpp.obj: ../tests/test_truco.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/truco.dir/tests/test_truco.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\truco.dir\tests\test_truco.cpp.obj -c C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\tests\test_truco.cpp

CMakeFiles/truco.dir/tests/test_truco.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/truco.dir/tests/test_truco.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\tests\test_truco.cpp > CMakeFiles\truco.dir\tests\test_truco.cpp.i

CMakeFiles/truco.dir/tests/test_truco.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/truco.dir/tests/test_truco.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\tests\test_truco.cpp -o CMakeFiles\truco.dir\tests\test_truco.cpp.s

# Object files for target truco
truco_OBJECTS = \
"CMakeFiles/truco.dir/tests/test_truco.cpp.obj"

# External object files for target truco
truco_EXTERNAL_OBJECTS =

truco.exe: CMakeFiles/truco.dir/tests/test_truco.cpp.obj
truco.exe: CMakeFiles/truco.dir/build.make
truco.exe: libgtest.a
truco.exe: libgtest_main.a
truco.exe: CMakeFiles/truco.dir/linklibs.rsp
truco.exe: CMakeFiles/truco.dir/objects1.rsp
truco.exe: CMakeFiles/truco.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable truco.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\truco.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/truco.dir/build: truco.exe
.PHONY : CMakeFiles/truco.dir/build

CMakeFiles/truco.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\truco.dir\cmake_clean.cmake
.PHONY : CMakeFiles/truco.dir/clean

CMakeFiles/truco.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\cmake-build-debug C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\cmake-build-debug C:\Users\luzas\CLionProjects\Algo2\Labo_2_clase\cmake-build-debug\CMakeFiles\truco.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/truco.dir/depend

