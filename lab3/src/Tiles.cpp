//
// Created by Aleksandr on 2019-05-01.
//

#include "Tiles.h"
#include <sstream>

std::string Tiles::getData() {
    std::string result;
    std::stringstream ss;
    ss << brand << " " << size_h << "x" << size_w << " $" << price;
    result = ss.str();
    return result;
}