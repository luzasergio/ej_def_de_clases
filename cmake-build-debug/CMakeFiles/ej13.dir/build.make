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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\luzas\CLionProjects\labo02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\luzas\CLionProjects\labo02\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ej13.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ej13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ej13.dir/flags.make

CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.obj: CMakeFiles/ej13.dir/flags.make
CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.obj: ../tests/test_recordatorios.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\luzas\CLionProjects\labo02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ej13.dir\tests\test_recordatorios.cpp.obj -c C:\Users\luzas\CLionProjects\labo02\tests\test_recordatorios.cpp

CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\luzas\CLionProjects\labo02\tests\test_recordatorios.cpp > CMakeFiles\ej13.dir\tests\test_recordatorios.cpp.i

CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\luzas\CLionProjects\labo02\tests\test_recordatorios.cpp -o CMakeFiles\ej13.dir\tests\test_recordatorios.cpp.s

# Object files for target ej13
ej13_OBJECTS = \
"CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.obj"

# External object files for target ej13
ej13_EXTERNAL_OBJECTS =

ej13.exe: CMakeFiles/ej13.dir/tests/test_recordatorios.cpp.obj
ej13.exe: CMakeFiles/ej13.dir/build.make
ej13.exe: libgtest.a
ej13.exe: libgtest_main.a
ej13.exe: CMakeFiles/ej13.dir/linklibs.rsp
ej13.exe: CMakeFiles/ej13.dir/objects1.rsp
ej13.exe: CMakeFiles/ej13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\luzas\CLionProjects\labo02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ej13.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ej13.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ej13.dir/build: ej13.exe
.PHONY : CMakeFiles/ej13.dir/build

CMakeFiles/ej13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ej13.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ej13.dir/clean

CMakeFiles/ej13.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\luzas\CLionProjects\labo02 C:\Users\luzas\CLionProjects\labo02 C:\Users\luzas\CLionProjects\labo02\cmake-build-debug C:\Users\luzas\CLionProjects\labo02\cmake-build-debug C:\Users\luzas\CLionProjects\labo02\cmake-build-debug\CMakeFiles\ej13.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ej13.dir/depend

