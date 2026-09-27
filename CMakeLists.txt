cmake_minimum_required(VERSION 3.26)
project(AtCoder)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_executable(AtCoder
        AtCoder.cpp
)

add_executable(CodeForces
        CodeForces.cpp
)

target_compile_definitions(AtCoder PRIVATE LOCAL)
target_compile_definitions(CodeForces PRIVATE LOCAL)

target_include_directories(AtCoder PRIVATE /usr/local/include)
target_include_directories(CodeForces PRIVATE /usr/local/include)