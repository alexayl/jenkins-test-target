cmake_minimum_required(VERSION 3.10)
project(HILTest C)

set(CMAKE_C_STANDARD 11)

add_library(motor STATIC src/motor.c)
add_executable(main src/main.c)
target_link_libraries(main motor)

add_executable(test_motor tests/test_motor.c)
target_link_libraries(test_motor motor)