cmake_minimum_required(VERSION 4.1.0)

project(11122025_cmake_project)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(obucaika)
add_subdirectory(sort)

set(CMAKE_SUPRESS_REGENERATION true)