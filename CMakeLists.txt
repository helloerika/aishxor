cmake_minimum_required(VERSION 3.7)
project(aish_and_xor)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Header/Aishxor.h Classes/Aishxor.cpp)
add_executable(aish_and_xor ${SOURCE_FILES})