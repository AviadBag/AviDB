# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\aviad\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\aviad\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Programming\Projects\C++\AviDB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programming\Projects\C++\AviDB\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\AviDB.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\AviDB.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\AviDB.dir\flags.make

CMakeFiles\AviDB.dir\AviDB\Array.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\Array.obj: ..\AviDB\Array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AviDB.dir/AviDB/Array.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\Array.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\Array.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Array.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/Array.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\Array.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\Array.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Array.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/Array.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\Array.s /c C:\Programming\Projects\C++\AviDB\AviDB\Array.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Convert.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\Convert.obj: ..\AviDB\Convert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AviDB.dir/AviDB/Convert.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\Convert.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\Convert.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Convert.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/Convert.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\Convert.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\Convert.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Convert.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/Convert.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\Convert.s /c C:\Programming\Projects\C++\AviDB\AviDB\Convert.cpp
<<

CMakeFiles\AviDB.dir\AviDB\DataBase.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\DataBase.obj: ..\AviDB\DataBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AviDB.dir/AviDB/DataBase.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\DataBase.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\DataBase.cpp
<<

CMakeFiles\AviDB.dir\AviDB\DataBase.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/DataBase.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\DataBase.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\DataBase.cpp
<<

CMakeFiles\AviDB.dir\AviDB\DataBase.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/DataBase.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\DataBase.s /c C:\Programming\Projects\C++\AviDB\AviDB\DataBase.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Dict.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\Dict.obj: ..\AviDB\Dict.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AviDB.dir/AviDB/Dict.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\Dict.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\Dict.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Dict.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/Dict.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\Dict.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\Dict.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Dict.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/Dict.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\Dict.s /c C:\Programming\Projects\C++\AviDB\AviDB\Dict.cpp
<<

CMakeFiles\AviDB.dir\AviDB\DictItem.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\DictItem.obj: ..\AviDB\DictItem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AviDB.dir/AviDB/DictItem.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\DictItem.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\DictItem.cpp
<<

CMakeFiles\AviDB.dir\AviDB\DictItem.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/DictItem.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\DictItem.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\DictItem.cpp
<<

CMakeFiles\AviDB.dir\AviDB\DictItem.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/DictItem.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\DictItem.s /c C:\Programming\Projects\C++\AviDB\AviDB\DictItem.cpp
<<

CMakeFiles\AviDB.dir\AviDB\IO.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\IO.obj: ..\AviDB\IO.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AviDB.dir/AviDB/IO.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\IO.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\IO.cpp
<<

CMakeFiles\AviDB.dir\AviDB\IO.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/IO.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\IO.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\IO.cpp
<<

CMakeFiles\AviDB.dir\AviDB\IO.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/IO.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\IO.s /c C:\Programming\Projects\C++\AviDB\AviDB\IO.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Item.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\Item.obj: ..\AviDB\Item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AviDB.dir/AviDB/Item.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\Item.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\Item.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Item.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/Item.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\Item.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\Item.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Item.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/Item.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\Item.s /c C:\Programming\Projects\C++\AviDB\AviDB\Item.cpp
<<

CMakeFiles\AviDB.dir\main.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\main.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/AviDB.dir/main.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\main.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\main.cpp
<<

CMakeFiles\AviDB.dir\main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/main.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\main.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\main.cpp
<<

CMakeFiles\AviDB.dir\main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/main.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\main.s /c C:\Programming\Projects\C++\AviDB\main.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Parser.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\Parser.obj: ..\AviDB\Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/AviDB.dir/AviDB/Parser.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\Parser.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\Parser.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Parser.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/Parser.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\Parser.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\Parser.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Parser.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/Parser.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\Parser.s /c C:\Programming\Projects\C++\AviDB\AviDB\Parser.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Text.obj: CMakeFiles\AviDB.dir\flags.make
CMakeFiles\AviDB.dir\AviDB\Text.obj: ..\AviDB\Text.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/AviDB.dir/AviDB/Text.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\AviDB.dir\AviDB\Text.obj /FdCMakeFiles\AviDB.dir\ /FS -c C:\Programming\Projects\C++\AviDB\AviDB\Text.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Text.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AviDB.dir/AviDB/Text.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\AviDB.dir\AviDB\Text.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\Projects\C++\AviDB\AviDB\Text.cpp
<<

CMakeFiles\AviDB.dir\AviDB\Text.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AviDB.dir/AviDB/Text.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\AviDB.dir\AviDB\Text.s /c C:\Programming\Projects\C++\AviDB\AviDB\Text.cpp
<<

# Object files for target AviDB
AviDB_OBJECTS = \
"CMakeFiles\AviDB.dir\AviDB\Array.obj" \
"CMakeFiles\AviDB.dir\AviDB\Convert.obj" \
"CMakeFiles\AviDB.dir\AviDB\DataBase.obj" \
"CMakeFiles\AviDB.dir\AviDB\Dict.obj" \
"CMakeFiles\AviDB.dir\AviDB\DictItem.obj" \
"CMakeFiles\AviDB.dir\AviDB\IO.obj" \
"CMakeFiles\AviDB.dir\AviDB\Item.obj" \
"CMakeFiles\AviDB.dir\main.obj" \
"CMakeFiles\AviDB.dir\AviDB\Parser.obj" \
"CMakeFiles\AviDB.dir\AviDB\Text.obj"

# External object files for target AviDB
AviDB_EXTERNAL_OBJECTS =

AviDB.exe: CMakeFiles\AviDB.dir\AviDB\Array.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\Convert.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\DataBase.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\Dict.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\DictItem.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\IO.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\Item.obj
AviDB.exe: CMakeFiles\AviDB.dir\main.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\Parser.obj
AviDB.exe: CMakeFiles\AviDB.dir\AviDB\Text.obj
AviDB.exe: CMakeFiles\AviDB.dir\build.make
AviDB.exe: CMakeFiles\AviDB.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable AviDB.exe"
	C:\Users\aviad\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\AviDB.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\AviDB.dir\objects1.rsp @<<
 /out:AviDB.exe /implib:AviDB.lib /pdb:C:\Programming\Projects\C++\AviDB\cmake-build-debug\AviDB.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\AviDB.dir\build: AviDB.exe

.PHONY : CMakeFiles\AviDB.dir\build

CMakeFiles\AviDB.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AviDB.dir\cmake_clean.cmake
.PHONY : CMakeFiles\AviDB.dir\clean

CMakeFiles\AviDB.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Programming\Projects\C++\AviDB C:\Programming\Projects\C++\AviDB C:\Programming\Projects\C++\AviDB\cmake-build-debug C:\Programming\Projects\C++\AviDB\cmake-build-debug C:\Programming\Projects\C++\AviDB\cmake-build-debug\CMakeFiles\AviDB.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\AviDB.dir\depend

