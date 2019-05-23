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

Tiles::Tiles(const std::string &brand, int size_h, int size_w, int price) : brand(brand), size_h(size_h),
                                                                            size_w(size_w), price(price) {}

Tiles::Tiles(int size_h, int size_w) : size_h(size_h), size_w(size_w) {}

Tiles::Tiles(const std::string &brand, int price) : brand(brand), price(price) {}

Tiles::~Tiles() {

}
