cmake_minimum_required(VERSION 3.19)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp LteModule.cpp LteModule.hpp LteModuleA.cpp LteModuleA.hpp LteModuleB.cpp LteModuleB.hpp LteModuleManagement.cpp LteModuleManagement.hpp)