cmake_minimum_required(VERSION 3.10)

project(HashMapCpp)
set(PROJECT_NAME HashMapCpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "hash/*.h")

include_directories(hash)

add_executable(${PROJECT_NAME} main.cpp ${SOURCES} ${HEADERS})

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)