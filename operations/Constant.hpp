//
// Created by Miguel Yurivilca on 2019-05-10.
//

#ifndef SOLVER_CONSTANT_HPP
#define SOLVER_CONSTANT_HPP

#include "operation.hpp"

class Constant : public Operation
{
public:
    explicit Constant(std::string c);
    ~Constant();
    float operate();
};


#endif //SOLVER_CONSTANT_HPP
