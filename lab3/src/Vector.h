//
// Created by Aleksandr on 2019-05-01.
//

#ifndef LAB3_VECTOR_H
#define LAB3_VECTOR_H


class Vector {
private:
    int x, y;
public:
    Vector(int x, int y) : x(x), y(y){}

    int getX() const;

    int getY() const;

    double getModule() const;

    Vector *setX(int x);

    Vector *setY(int y);

    friend const Vector operator+(const Vector &v1, const Vector &v2);

    friend Vector &operator+=(Vector &v1, const Vector &v2);

    friend const Vector operator-(const Vector &v1, const Vector &v2);

    friend Vector &operator-=(Vector &v1, const Vector &v2);
};

const Vector operator+(const Vector &v1, const Vector &v2);

Vector &operator+=(Vector &v1, const Vector &v2);

const Vector operator-(const Vector &v1, const Vector &v2);

Vector &operator-=(Vector &v1, const Vector &v2);

#endif //LAB3_VECTOR_H
