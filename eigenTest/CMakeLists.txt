# declare required minimum version
cmake_minimum_required( VERSION 2.8)

# declare a cmake project
project(eigenTest)

# include head file directories
include_directories("/usr/include/eigen3")#wjk@G410
include_directories("/home/wangjk/Desktop/eigen3")#wangjk@rf-server1


# add an executable program
add_executable(${PROJECT_NAME} "main.cpp")

