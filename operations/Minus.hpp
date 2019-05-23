//
// Created by Miguel Yurivilca on 2019-05-16.
//

#ifndef SOLVER_MINUS_HPP
#define SOLVER_MINUS_HPP

#include "operation.hpp"

class Minus : public Operation
{
public:
    Minus();
    Minus(Operation *left, Operation *right);
    ~Minus();
    float operate();
};


#endif //SOLVER_MINUS_HPP
