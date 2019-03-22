//
// Created by Aleksandr on 2019-03-22.
//

#ifndef LAB1_COMPLEX_H
#define LAB1_COMPLEX_H


class Complex {
private:
    float real, imagine;
public:

    Complex() {

    }

    Complex(const float &real, const float &imagine) : real(real), imagine(imagine) {
    }

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

#endif //LAB1_COMPLEX_H
