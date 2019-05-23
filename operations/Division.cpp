//
// Created by Miguel Yurivilca on 2019-05-20.
//

#include "Division.hpp"

Division::Division(Operation *left, Operation *right) : Operation(left, right) {

}

float Division::operate() {
    return left->operate() / right->operate();
}