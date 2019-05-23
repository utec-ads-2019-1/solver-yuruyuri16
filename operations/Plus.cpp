//
// Created by Miguel Yurivilca on 2019-05-10.
//

#include "Plus.hpp"

Plus::Plus(Operation *left, Operation *right) : Operation(left, right)
{
    equation = '+';
}

Plus::~Plus() = default;

float Plus::operate()
{
    return left->operate() + right->operate();
}