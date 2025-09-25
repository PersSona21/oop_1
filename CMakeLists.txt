cmake_minimum_required(VERSION 3.14)
project(ExtractNumbers CXX)

set(CMAKE_C_COMPILER "/opt/homebrew/bin/gcc-14")
set(CMAKE_CXX_COMPILER "/opt/homebrew/bin/g++-14")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(extract_numbers src/main.cpp src/extruct.cpp)
target_include_directories(extract_numbers PUBLIC include)

add_subdirectory(tests)
