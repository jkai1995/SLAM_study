# declare required minimum version
cmake_minimum_required( VERSION 2.8)

# declare a cmake project
project(HelloSLAM)

# add an executable program
add_executable(helloSLAM helloSLAM.cpp)

#add lib
add_library(hello_shared SHARED libHelloSLAM.cpp)

add_executable(useHello useHello.cpp)
target_link_libraries(useHello hello_shared)
