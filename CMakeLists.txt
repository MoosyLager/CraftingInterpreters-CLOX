cmake_minimum_required(VERSION 4.00)
project(DoubleLinkedList C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(LinkedList
    main.c
    ${CMAKE_SOURCE_DIR}/src/doubleLinkedList.h
    ${CMAKE_SOURCE_DIR}/src/doubleLinkedList.c
)

target_include_directories(LinkedList
    PRIVATE ${CMAKE_SOURCE_DIR}/src
)