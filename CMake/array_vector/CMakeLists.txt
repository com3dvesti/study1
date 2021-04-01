CMAKE_MINIMUM_REQUIRED (VERSION 3.19.1)
PROJECT(arr_container)

add_executable(arr_container src/arr_container.cpp)
target_include_directories(arr_container PRIVATE include)
