cmake_minimum_required(VERSION 3.24)
project(Employee_Management)

set(CMAKE_CXX_STANDARD 17)

add_executable(Employee_Management main.cpp workerManager.cpp employee.h employee.cpp manager.h manager.cpp boss.cpp boss.h)
