//
// Created by Miguel Yurivilca on 2019-05-10.
//

#include "Constant.hpp"

Constant::Constant(std::string c) : Operation()
{
    equation = c;
}

Constant::~Constant() = default;

float Constant::operate() {
    return std::atof(equation.c_str());
}