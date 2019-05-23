//
// Created by Aleksandr on 2019-03-22.
//

#include "Complex.h"
#include <iostream>

const Complex operator+(const Complex &a1, const Complex &a2) {
    Complex result(a1.real + a2.real, a1.imagine + a2.imagine);
    return result;
}

const Complex operator-(const Complex &a1, const Complex &a2) {
    Complex result(a1.real - a2.real, a1.imagine - a2.imagine);
    return result;
};

const Complex operator*(const Complex &a1, const Complex &a2) {
    Complex result(a1.real * a2.real - a1.imagine * a2.imagine, a1.real * a2.imagine + a1.imagine * a2.real);
    return result;
};

const Complex operator/(const Complex &a1, const Complex &a2) {
    float a = a1.real, b = a1.imagine, c = a2.real, d = a2.imagine;
    Complex result((a * c + b * d) / (c * c + d * d), -((a * d - b * c) / (c * c + d * d)));
    return result;
};

Complex &operator+=(Complex &left, const Complex &right) {
    left.real = left.real + right.real;
    left.imagine = left.imagine + right.imagine;
    return left;
};

Complex &operator-=(Complex &left, const Complex &right) {
    left.real = left.real - right.real;
    left.imagine = left.imagine - right.imagine;
    return left;
};

Complex &operator*=(Complex &left, const Complex &right) {
    left.real = left.real * right.real - left.imagine * right.imagine;
    left.imagine = left.real * right.imagine + left.imagine * right.real;
    return left;
};

Complex &operator/=(Complex &left, const Complex &right) {
    float a = left.real, b = left.imagine, c = right.real, d = right.imagine;
    float ff = c * c + d * d;
    if (!ff) throw DIVISION_BY_ZERO_EXCEPTION;
    left.real = (a * c + b * d) / ff;
    left.imagine = -((a * d - b * c) / ff);
    return left;
};

bool operator==(const Complex &a1, const Complex &a2){
    return (a1.real == a2.real && a1.imagine == a2.imagine);
};

float Complex::getReal() {
    return this->real;
};

float Complex::getImagine() {
    return this->imagine;
};

void Complex::setReal(const float &r) {
    this->real = r;
};

void Complex::setImagine(const float &i) {
    this->imagine = i;
};

Complex Complex::getMated() {
    Complex complex(this->real, -this->imagine);
    return complex;
};

std::ostream &operator<<(std::ostream &os, const Complex &c){
    os << c.real << " + " << c.imagine << 'i';
    return os;
};

std::istream &operator>>(std::istream &is, Complex &c){
    is >> c.real >> c.imagine;
    return is;
}

Complex::Complex() {}

Complex::Complex(float real, float imagine) : real(real), imagine(imagine) {}

Complex::~Complex() {

};