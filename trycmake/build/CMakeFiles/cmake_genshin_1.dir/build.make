# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hsxmark/Documents/Github/TrashCanCodes/trycmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build

# Include any dependencies generated for this target.
include CMakeFiles/cmake_genshin_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cmake_genshin_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake_genshin_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake_genshin_1.dir/flags.make

CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o: CMakeFiles/cmake_genshin_1.dir/flags.make
CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o: ../src/cmake_genshin.cpp
CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o: CMakeFiles/cmake_genshin_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o -MF CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o.d -o CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o -c /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/src/cmake_genshin.cpp

CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/src/cmake_genshin.cpp > CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.i

CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/src/cmake_genshin.cpp -o CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.s

CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o: CMakeFiles/cmake_genshin_1.dir/flags.make
CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o: ../tools/genshin.cpp
CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o: CMakeFiles/cmake_genshin_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o -MF CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o.d -o CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o -c /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/tools/genshin.cpp

CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/tools/genshin.cpp > CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.i

CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/tools/genshin.cpp -o CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.s

# Object files for target cmake_genshin_1
cmake_genshin_1_OBJECTS = \
"CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o" \
"CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o"

# External object files for target cmake_genshin_1
cmake_genshin_1_EXTERNAL_OBJECTS =

cmake_genshin_1: CMakeFiles/cmake_genshin_1.dir/src/cmake_genshin.cpp.o
cmake_genshin_1: CMakeFiles/cmake_genshin_1.dir/tools/genshin.cpp.o
cmake_genshin_1: CMakeFiles/cmake_genshin_1.dir/build.make
cmake_genshin_1: CMakeFiles/cmake_genshin_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cmake_genshin_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake_genshin_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake_genshin_1.dir/build: cmake_genshin_1
.PHONY : CMakeFiles/cmake_genshin_1.dir/build

CMakeFiles/cmake_genshin_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmake_genshin_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmake_genshin_1.dir/clean

CMakeFiles/cmake_genshin_1.dir/depend:
	cd /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hsxmark/Documents/Github/TrashCanCodes/trycmake /home/hsxmark/Documents/Github/TrashCanCodes/trycmake /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build /home/hsxmark/Documents/Github/TrashCanCodes/trycmake/build/CMakeFiles/cmake_genshin_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake_genshin_1.dir/depend

