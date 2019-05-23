//
// Created by Miguel Yurivilca on 2019-05-20.
//

#include "Multiplication.hpp"

Multiplication::Multiplication(Operation *left, Operation *right) : Operation(left, right)
{
    equation = '*';
}

float Multiplication::operate() {
    return left->operate() * right->operate();
}
