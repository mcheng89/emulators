cmake_minimum_required(VERSION 3.20)
project(chip8)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
Message("")
Message( STATUS "FINDING SDL2" )
IF (${SDL2_FOUND})
    Message( STATUS "SDL2_FOUND: " ${SDL2_FOUND})
    Message( STATUS "SDL2_INCLUDE_DIR:" ${SDL2_INCLUDE_DIRS})
    Message( STATUS "SDL2_LIBRARY: " ${SDL2_LIBRARIES})
ELSE()
    Message( STATUS "SDL2_FOUND: " ${SDL2_FOUND})
    Message( FATAL_ERROR "SDL2 NOT FOUND" )
ENDIF()
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(chip8 main.cpp chip8.cpp chip8.h platform.h platform.cpp)

target_link_libraries(chip8 ${SDL2_LIBRARIES})
