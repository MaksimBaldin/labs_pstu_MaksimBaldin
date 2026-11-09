cmake_minimum_required(VERSION 3.20)

project(my_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(my_app src/main.cpp)
add_executable(lab2 src/lab2.cpp)
add_executable(lab3 src/lab3.cpp)
add_executable(lab4 src/lab4.cpp)

foreach(target my_app lab2 lab3 lab4)
    target_compile_options(${target} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/W4>
        $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic>
    )
endforeach()