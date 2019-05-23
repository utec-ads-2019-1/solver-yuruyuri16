//
// Created by Miguel Yurivilca on 2019-05-20.
//

#ifndef SOLVER_DIVISION_HPP
#define SOLVER_DIVISION_HPP

#include "operation.hpp"

class Division : public Operation
{
public:
    Division();
    Division(Operation *left, Operation *right);
    float operate();
};


#endif //SOLVER_DIVISION_HPP
