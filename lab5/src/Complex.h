//
// Created by Aleksandr on 2019-03-22.
//

#ifndef LAB3_COMPLEX_H
#define LAB3_COMPLEX_H

#define DIVISION_BY_ZERO_EXCEPTION 101


class Complex {
private:
    float real, imagine;
public:

    Complex();

    Complex(float real, float imagine);

    virtual ~Complex();

    friend const Complex operator+(const Complex &a1, const Complex &a2);

    friend const Complex operator-(const Complex &a1, const Complex &a2);

    friend const Complex operator*(const Complex &a1, const Complex &a2);

    friend const Complex operator/(const Complex &a1, const Complex &a2);

    friend Complex &operator+=(Complex &a1, const Complex &a2);

    friend Complex &operator-=(Complex &a1, const Complex &a2);

    friend Complex &operator*=(Complex &a1, const Complex &a2);

    friend Complex &operator/=(Complex &a1, const Complex &a2);

    friend bool operator==(const Complex &a1, const Complex &a2);

    friend std::ostream &operator<<(std::ostream &os, const Complex &c);

    friend std::istream &operator>>(std::istream &is, Complex &c);

    Complex getMated();

    float getReal();

    float getImagine();

    void setReal(const float &r);

    void setImagine(const float &i);
};

const Complex operator+(const Complex &a1, const Complex &a2);

const Complex operator-(const Complex &a1, const Complex &a2);

const Complex operator*(const Complex &a1, const Complex &a2);

const Complex operator/(const Complex &a1, const Complex &a2);

Complex &operator+=(Complex &a1, const Complex &a2);

Complex &operator-=(Complex &a1, const Complex &a2);

Complex &operator*=(Complex &a1, const Complex &a2);

Complex &operator/=(Complex &a1, const Complex &a2);

bool operator==(const Complex &a1, const Complex &a2);

std::ostream &operator<<(std::ostream &os, const Complex &c);

std::istream &operator>>(std::istream &is, Complex &c);

#endif //LAB1_COMPLEX_H
