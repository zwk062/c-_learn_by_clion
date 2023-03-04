cmake_minimum_required(VERSION 3.24)
project(inherit)

set(CMAKE_CXX_STANDARD 17)

add_executable(inherit 1继承的基本语法.cpp 2继承方式.cpp 3继承中的对象模型.cpp 4继承中构造和析构顺序.cpp 5继承同名成员的处理方式.cpp)
