//
// Created by Miguel Yurivilca on 2019-05-10.
//

#ifndef SOLVER_PLUS_HPP
#define SOLVER_PLUS_HPP

#include "operation.hpp"

class Plus : public Operation
{
public:
    Plus();
    Plus(Operation *left, Operation *right);
    ~Plus();
    float operate();
};


#endif //SOLVER_PLUS_HPP
