# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = C:/cmake/cmake-3.13.1-win64-x64/bin/cmake.exe

# The command to remove a file.
RM = C:/cmake/cmake-3.13.1-win64-x64/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build

# Include any dependencies generated for this target.
include CMakeFiles/shapeslib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shapeslib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shapeslib.dir/flags.make

CMakeFiles/shapeslib.dir/point.cc.obj: CMakeFiles/shapeslib.dir/flags.make
CMakeFiles/shapeslib.dir/point.cc.obj: ../point.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shapeslib.dir/point.cc.obj"
	C:/MinGW/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shapeslib.dir/point.cc.obj -c C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/point.cc

CMakeFiles/shapeslib.dir/point.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shapeslib.dir/point.cc.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/point.cc > CMakeFiles/shapeslib.dir/point.cc.i

CMakeFiles/shapeslib.dir/point.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shapeslib.dir/point.cc.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/point.cc -o CMakeFiles/shapeslib.dir/point.cc.s

CMakeFiles/shapeslib.dir/polygon.cc.obj: CMakeFiles/shapeslib.dir/flags.make
CMakeFiles/shapeslib.dir/polygon.cc.obj: ../polygon.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/shapeslib.dir/polygon.cc.obj"
	C:/MinGW/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shapeslib.dir/polygon.cc.obj -c C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/polygon.cc

CMakeFiles/shapeslib.dir/polygon.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shapeslib.dir/polygon.cc.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/polygon.cc > CMakeFiles/shapeslib.dir/polygon.cc.i

CMakeFiles/shapeslib.dir/polygon.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shapeslib.dir/polygon.cc.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/polygon.cc -o CMakeFiles/shapeslib.dir/polygon.cc.s

# Object files for target shapeslib
shapeslib_OBJECTS = \
"CMakeFiles/shapeslib.dir/point.cc.obj" \
"CMakeFiles/shapeslib.dir/polygon.cc.obj"

# External object files for target shapeslib
shapeslib_EXTERNAL_OBJECTS =

libshapeslib.a: CMakeFiles/shapeslib.dir/point.cc.obj
libshapeslib.a: CMakeFiles/shapeslib.dir/polygon.cc.obj
libshapeslib.a: CMakeFiles/shapeslib.dir/build.make
libshapeslib.a: CMakeFiles/shapeslib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libshapeslib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/shapeslib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shapeslib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shapeslib.dir/build: libshapeslib.a

.PHONY : CMakeFiles/shapeslib.dir/build

CMakeFiles/shapeslib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shapeslib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shapeslib.dir/clean

CMakeFiles/shapeslib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07 C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07 C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt07/build/CMakeFiles/shapeslib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shapeslib.dir/depend

