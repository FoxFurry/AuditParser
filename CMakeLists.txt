cmake_minimum_required(VERSION 3.16)
project(auditParser)

set(CMAKE_CXX_STANDARD 14)

add_executable(auditParser main.cpp include/AuditParser.h src/AuditParser.cpp include/AuditConfig.h)
