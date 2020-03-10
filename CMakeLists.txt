# cmake_minimum_required(VERSION <specify CMake version here>)
project(AviDB)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(AviDB
        AviDB/Array.cpp
        AviDB/Array.h
        AviDB/Convert.cpp
        AviDB/Convert.h
        AviDB/Data.h
        AviDB/DataBase.cpp
        AviDB/DataBase.h
        AviDB/Dict.cpp
        AviDB/Dict.h
        AviDB/DictItem.cpp
        AviDB/DictItem.h
        AviDB/IO.cpp
        AviDB/IO.h
        AviDB/Item.cpp
        AviDB/Item.h
        main.cpp
        AviDB/Parser.cpp
        AviDB/Parser.h
        AviDB/Text.cpp
        AviDB/Text.h AviDB/Interpreter.cpp AviDB/Interpreter.h)
