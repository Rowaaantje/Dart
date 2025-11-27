cmake_minimum_required(VERSION 3.10)

project(dart)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(dart 
    scene/main.cpp
    scene/calculator.cpp
    scene/dartOptions.cpp
    scene/scene.cpp)