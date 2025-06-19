cmake_minimum_required(VERSION 4.00)
project(InterpreterCLOX C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(clox
    main.c
)

target_include_directories(clox
    PRIVATE ${CMAKE_SOURCE_DIR}/src
)