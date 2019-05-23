//
// Created by Miguel Yurivilca on 2019-05-20.
//

#ifndef SOLVER_MULTIPLICATION_HPP
#define SOLVER_MULTIPLICATION_HPP

#include "operation.hpp"

class Multiplication : public Operation
{
public:
    Multiplication();
    Multiplication(Operation *left, Operation *right);
    float operate();
};


#endif //SOLVER_MULTIPLICATION_HPP
