//
// Created by Miguel Yurivilca on 2019-05-10.
//

#ifndef SOLVER_OPERATION_HPP
#define SOLVER_OPERATION_HPP

#include <string>
#include <iostream>
#include <cstdlib>


class Operation {
protected:
    std::string equation;
    Operation *left;
    Operation *right;

public:
    Operation();
    Operation(Operation *left, Operation *right);

    static Operation* buildFromEquation(std::string equation);

    inline std::string name() { return equation; }

    virtual float operate() = 0;
};


#endif //SOLVER_OPERATION_HPP
