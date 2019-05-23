//
// Created by Miguel Yurivilca on 2019-05-10.
//

#include "OperationFactory.hpp"

Operation *OperationFactory::ReturnOperation(char op, Operation *left, Operation *right)
{
    switch (op)
    {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Multiplication(left, right);
        case '/':
            return new Division(left, right);
        case '^':
            return new Power(left, right);
        default:
            throw std::invalid_argument("Invalid argument.\n");
    }
}

Operation *OperationFactory::ReturnNumber(std::string number)
{
    return new Constant(number);
}
