cmake_minimum_required(VERSION 3.10)
project(HILTest C)

set(CMAKE_C_STANDARD 11)

# Add the motor library
add_library(motor STATIC src/motor.c)
target_include_directories(motor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Main application
add_executable(main src/main.c)
target_link_libraries(main PRIVATE motor)

# Unit test executable
add_executable(test_motor tests/test_motor.c)
target_link_libraries(test_motor PRIVATE motor)

enable_testing()

add_test(NAME MotorTests COMMAND test_motor)
