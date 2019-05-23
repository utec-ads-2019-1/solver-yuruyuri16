cmake_minimum_required(VERSION 3.14)
project(solver)

set(CMAKE_CXX_STANDARD 17)

add_executable(solver main.cpp
        operations/operation.cpp
        operations/operation.hpp
        operations/Plus.cpp
        operations/Plus.hpp
        operations/Constant.cpp
        operations/Constant.hpp
        operations/OperationFactory.cpp
        operations/OperationFactory.hpp
        tester/tester.cpp
        tester/tester.hpp operations/Minus.cpp operations/Minus.hpp operations/Multiplication.cpp operations/Multiplication.hpp operations/Division.cpp operations/Division.hpp operations/Power.cpp operations/Power.hpp)