cmake_minimum_required(VERSION 3.28)
project(Position_Practice)

set(CMAKE_CXX_STANDARD 17)

add_executable(Position_Practice main.cpp
        src/Position.cpp
        include/Position.h
        include/Vehicle.h
        src/Vehicle.cpp
        include/Car.h
        src/Car.cpp
        include/Boat.h
        src/Boat.cpp)
