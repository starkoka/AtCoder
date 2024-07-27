cmake_minimum_required(VERSION 3.26)
project(AtCoder)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-D LOCAL")

add_executable(AtCoder
        AtCoder.cpp
)

add_executable(CodeForces
        CodeForces.cpp
)