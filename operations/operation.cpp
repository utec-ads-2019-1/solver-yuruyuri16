//
// Created by Miguel Yurivilca on 2019-05-10.
//

#include "operation.hpp"
#include "OperationFactory.hpp"

Operation::Operation() : left(nullptr), right(nullptr)
{

}

Operation::Operation(Operation *left, Operation *right) : left(left), right(right)
{

}

Operation *Operation::buildFromEquation(std::string equation)
{
    unsigned long pos;

    static std::string operators = "-+*/^";


    if (pos = equation.find('-'); pos != std::string::npos)
    {
        if (operators.find(equation[pos - 1]) == std::string::npos || pos - 1 != std::string::npos)
        {
            auto left(buildFromEquation(equation.substr(0, pos)));
            auto right(buildFromEquation(equation.substr(pos + 1, std::string::npos)));
            return OperationFactory::ReturnOperation('-', left, right);
        }
        else
        {
            auto left(buildFromEquation(equation.substr(0, pos - 1)));
            auto right(buildFromEquation(equation.substr(pos , std::string::npos)));
            return OperationFactory::ReturnOperation(equation[pos - 1], left, right);
        }
    }
    else if (pos = equation.find('+'); pos != std::string::npos)
    {
        auto left(buildFromEquation(equation.substr(0, pos)));
        auto right(buildFromEquation(equation.substr(pos + 1, std::string::npos)));
        return OperationFactory::ReturnOperation('+', left, right);
    }
    else if (pos = equation.find('*'); pos != std::string::npos)
    {
        auto left(buildFromEquation(equation.substr(0, pos)));
        auto right(buildFromEquation(equation.substr(pos + 1, std::string::npos)));
        return OperationFactory::ReturnOperation('*', left, right);
    }
    else if (pos = equation.find('/'); pos != std::string::npos)
    {
        auto left(buildFromEquation(equation.substr(0, pos)));
        auto right(buildFromEquation(equation.substr(pos + 1, std::string::npos)));
        return OperationFactory::ReturnOperation('/', left, right);
    }
    else if (pos = equation.find('^'); pos != std::string::npos)
    {
        auto left(buildFromEquation(equation.substr(0, pos)));
        auto right(buildFromEquation(equation.substr(pos + 1, std::string::npos)));
        return OperationFactory::ReturnOperation('^', left, right);
    }
    return OperationFactory::ReturnNumber(equation);
}