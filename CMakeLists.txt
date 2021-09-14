cmake_minimum_required(VERSION 3.16)
project(xmlParser)

set(CMAKE_CXX_STANDARD 14)

add_executable(xmlParser main.cpp include/XMLParser.h src/XMLParser.cpp)
