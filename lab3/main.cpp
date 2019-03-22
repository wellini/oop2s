//
// Created by Aleksandr on 2019-03-22.
//
#include <iostream>
#include "Complex.cpp"

int main(){

    Complex c1(6, 5);
    Complex c2(7, -2);
    c1 /= c2;
    std::cout << c1;


    return 0;
}
