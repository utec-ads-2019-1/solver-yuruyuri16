//
// Created by Miguel Yurivilca on 2019-05-22.
//

#ifndef SOLVER_POWER_HPP
#define SOLVER_POWER_HPP

#include <cmath>

#include "operation.hpp"

class Power : public Operation
{
public:
    Power();
    Power(Operation *left, Operation *right);
    float operate();
};


#endif //SOLVER_POWER_HPP
