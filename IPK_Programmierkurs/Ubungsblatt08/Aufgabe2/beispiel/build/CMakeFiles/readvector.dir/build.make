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
CMAKE_SOURCE_DIR = C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/build

# Include any dependencies generated for this target.
include CMakeFiles/readvector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/readvector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/readvector.dir/flags.make

CMakeFiles/readvector.dir/readvector.cc.obj: CMakeFiles/readvector.dir/flags.make
CMakeFiles/readvector.dir/readvector.cc.obj: ../readvector.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/readvector.dir/readvector.cc.obj"
	C:/MinGW/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/readvector.dir/readvector.cc.obj -c C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/readvector.cc

CMakeFiles/readvector.dir/readvector.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/readvector.dir/readvector.cc.i"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/readvector.cc > CMakeFiles/readvector.dir/readvector.cc.i

CMakeFiles/readvector.dir/readvector.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/readvector.dir/readvector.cc.s"
	C:/MinGW/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/readvector.cc -o CMakeFiles/readvector.dir/readvector.cc.s

# Object files for target readvector
readvector_OBJECTS = \
"CMakeFiles/readvector.dir/readvector.cc.obj"

# External object files for target readvector
readvector_EXTERNAL_OBJECTS =

readvector.exe: CMakeFiles/readvector.dir/readvector.cc.obj
readvector.exe: CMakeFiles/readvector.dir/build.make
readvector.exe: libvectors.a
readvector.exe: CMakeFiles/readvector.dir/linklibs.rsp
readvector.exe: CMakeFiles/readvector.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable readvector.exe"
	C:/cmake/cmake-3.13.1-win64-x64/bin/cmake.exe -E remove -f CMakeFiles/readvector.dir/objects.a
	C:/MinGW/bin/ar.exe cr CMakeFiles/readvector.dir/objects.a @CMakeFiles/readvector.dir/objects1.rsp
	C:/MinGW/bin/c++.exe    -Wl,--whole-archive CMakeFiles/readvector.dir/objects.a -Wl,--no-whole-archive  -o readvector.exe -Wl,--out-implib,libreadvector.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/readvector.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/readvector.dir/build: readvector.exe

.PHONY : CMakeFiles/readvector.dir/build

CMakeFiles/readvector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/readvector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/readvector.dir/clean

CMakeFiles/readvector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2 C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2 C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/build C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/build C:/Users/markc/OneDrive/Aufgaben_uni/programmier_aufgaben_repo/IPK_Programmierkurs/Ubungsblatt08/Aufgabe2/build/CMakeFiles/readvector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/readvector.dir/depend

