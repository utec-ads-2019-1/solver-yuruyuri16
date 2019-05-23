//
// Created by Miguel Yurivilca on 2019-05-10.
//

#ifndef SOLVER_OPERATIONFACTORY_HPP
#define SOLVER_OPERATIONFACTORY_HPP

#include <stdexcept>

#include "operation.hpp"
#include "Plus.hpp"
#include "Minus.hpp"
#include "Multiplication.hpp"
#include "Division.hpp"
#include "Power.hpp"
#include "Constant.hpp"

class OperationFactory
{
public:
    static Operation* ReturnOperation(char op, Operation *left, Operation *right);
    static Operation* ReturnNumber(std::string number);
};


#endif //SOLVER_OPERATIONFACTORY_HPP