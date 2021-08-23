
cmake_minimum_required(VERSION 3.0)

if (CMAKE_HOST_APPLE)
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
endif ()


project(DESIGN_PATTERN)

add_subdirectory(01_SimpleFactory)
add_subdirectory(02_FactoryMethod)
add_subdirectory(03_AbstractFactory)
add_subdirectory(04_Singleton)
add_subdirectory(05_Builder)



