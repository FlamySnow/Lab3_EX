cmake_minimum_required(VERSION 3.20)
project(Set)

set(CMAKE_CXX_STANDARD 20)

ADD_LIBRARY( Set STATIC DynSet.h DynSet.cpp )