//
// Created by Aleksandr on 2019-05-01.
//

#include "Vector.h"
#include "math.h"

int Vector::getX() const {
    return x;
};

int Vector::getY() const {
    return y;
};

double Vector::getModule() const {
    return sqrt(x * x + y * y);
};

Vector *Vector::setX(int x) {
    this->x = x;
    return this;
};

Vector *Vector::setY(int y) {
    this->y = y;
    return this;
};

const Vector operator+(const Vector &v1, const Vector &v2) {
    Vector result(v1.getX() + v2.getX(), v1.getY() + v2.getY());
    return result;
};

Vector &operator+=(Vector &v1, const Vector &v2) {
    v1.setX(v1.getX() + v2.getX());
    v1.setY(v1.getY() + v2.getY());
    return v1;
};

const Vector operator-(const Vector &v1, const Vector &v2) {
    Vector result(v1.getX() - v2.getX(), v1.getY() - v2.getY());
    return result;
};

Vector &operator-=(Vector &v1, const Vector &v2) {
    v1.setX(v1.getX() - v2.getX());
    v1.setY(v1.getY() - v2.getY());
    return v1;
};

