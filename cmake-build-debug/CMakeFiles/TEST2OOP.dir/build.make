# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dzolo\CLionProjects\TEST2OOP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dzolo\CLionProjects\TEST2OOP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TEST2OOP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TEST2OOP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEST2OOP.dir/flags.make

CMakeFiles/TEST2OOP.dir/main.cpp.obj: CMakeFiles/TEST2OOP.dir/flags.make
CMakeFiles/TEST2OOP.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dzolo\CLionProjects\TEST2OOP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TEST2OOP.dir/main.cpp.obj"
	C:\minGB\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TEST2OOP.dir\main.cpp.obj -c C:\Users\dzolo\CLionProjects\TEST2OOP\main.cpp

CMakeFiles/TEST2OOP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST2OOP.dir/main.cpp.i"
	C:\minGB\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dzolo\CLionProjects\TEST2OOP\main.cpp > CMakeFiles\TEST2OOP.dir\main.cpp.i

CMakeFiles/TEST2OOP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST2OOP.dir/main.cpp.s"
	C:\minGB\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dzolo\CLionProjects\TEST2OOP\main.cpp -o CMakeFiles\TEST2OOP.dir\main.cpp.s

# Object files for target TEST2OOP
TEST2OOP_OBJECTS = \
"CMakeFiles/TEST2OOP.dir/main.cpp.obj"

# External object files for target TEST2OOP
TEST2OOP_EXTERNAL_OBJECTS =

TEST2OOP.exe: CMakeFiles/TEST2OOP.dir/main.cpp.obj
TEST2OOP.exe: CMakeFiles/TEST2OOP.dir/build.make
TEST2OOP.exe: CMakeFiles/TEST2OOP.dir/linklibs.rsp
TEST2OOP.exe: CMakeFiles/TEST2OOP.dir/objects1.rsp
TEST2OOP.exe: CMakeFiles/TEST2OOP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dzolo\CLionProjects\TEST2OOP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TEST2OOP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TEST2OOP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TEST2OOP.dir/build: TEST2OOP.exe

.PHONY : CMakeFiles/TEST2OOP.dir/build

CMakeFiles/TEST2OOP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TEST2OOP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TEST2OOP.dir/clean

CMakeFiles/TEST2OOP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dzolo\CLionProjects\TEST2OOP C:\Users\dzolo\CLionProjects\TEST2OOP C:\Users\dzolo\CLionProjects\TEST2OOP\cmake-build-debug C:\Users\dzolo\CLionProjects\TEST2OOP\cmake-build-debug C:\Users\dzolo\CLionProjects\TEST2OOP\cmake-build-debug\CMakeFiles\TEST2OOP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEST2OOP.dir/depend
