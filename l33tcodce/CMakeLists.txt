cmake_minimum_required(VERSION 3.8)
project(example)
add_definitions(-Wall)
add_definitions(-Werror)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(example ${SOURCE_FILES})

add_custom_target(run
    COMMAND example
    DEPENDS example
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)