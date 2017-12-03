cmake_minimum_required(VERSION 3.8)
project(Nastya)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(Nastya ${SOURCE_FILES})
target_link_libraries(Nastya m)