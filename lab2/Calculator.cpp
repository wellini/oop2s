//
// Created by Aleksandr on 2019-03-29.
//

#include "Calculator.h"
#include <sstream>

float Calculator::perform(std::string a, std::string b){
    std::istringstream issa(a), issb(b);
    float aFloat, bFloat;
    issa >> aFloat;
    issb >> bFloat;
    return operation(aFloat, bFloat);
};
