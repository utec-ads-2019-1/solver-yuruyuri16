//
// Created by Miguel Yurivilca on 2019-05-22.
//

#include "Power.hpp"

Power::Power(Operation *left, Operation *right) : Operation(left, right)
{
    equation = '^';
}

float Power::operate() {
    return pow(left->operate(), right->operate());
}
