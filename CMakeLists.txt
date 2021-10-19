cmake_minimum_required(VERSION 3.20)
project(Lab3_EX0)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab3_EX0 main.cpp)

find_library(LIB_PATH libSet
        PATHS
        ./SetDynamic/cmake-build-debug/)

target_include_directories(Lab3_EX0 PRIVATE ../lib)

TARGET_LINK_LIBRARIES( Lab3_EX0 ${LIB_PATH} )