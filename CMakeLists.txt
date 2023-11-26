cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 11)

#add_library(untitled library.c
#        insertionSort.h
#        insertionSort.c
#        main.c)
add_library(untitled library.c insertionSort.h insertionSort.c)
add_executable(main main.c)
target_link_libraries(main PRIVATE untitled)
