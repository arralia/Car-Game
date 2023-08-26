cmake_minimum_required(VERSION 3.20)

project(CAR GAME)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RUN_MAIN_FILE
    cargame.cpp
)
add_executable(main ${RUN_MAIN_FILE} cargame.cpp)