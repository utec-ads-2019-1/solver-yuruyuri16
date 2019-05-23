//
// Created by Miguel Yurivilca on 2019-05-16.
//

#include "Minus.hpp"

Minus::Minus(Operation *left, Operation *right) : Operation(left, right)
{
    equation = '-';
}

Minus::~Minus() = default;

float Minus::operate() {
    return left->operate() - right->operate();
}
