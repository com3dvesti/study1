CMAKE_MINIMUM_REQUIRED (VERSION 3.19.1)
PROJECT(program_gb)

add_executable(program_gb src/program_gb.cpp)

target_include_directories(program_gb PRIVATE include)
