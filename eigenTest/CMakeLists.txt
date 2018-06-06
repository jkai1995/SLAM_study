# declare required minimum version
cmake_minimum_required( VERSION 2.8)

# declare a cmake project
project(eigenTest)

# include head file directories
include_directories("/usr/include/eigen3")

# add an executable program
add_executable(${PROJECT_NAME} "main.cpp")

