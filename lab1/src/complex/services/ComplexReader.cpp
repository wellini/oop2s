//
// Created by Aleksandr on 2019-03-27.
//

#include "ComplexReader.h"
#include "../data/Complex.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

using namespace std;

ComplexReader::ComplexReader(string filename) {
    this->filename = filename;
    this->in.open(this->filename);
    this->array = (Complex *) realloc(array, sizeof(Complex));
    if (in) {
        string tmp;
        getline(in, tmp);
        length = getIntFromString(tmp);
        for (int i = 0; i < length; i++) {
            string tmp;
            getline(in, tmp);
            array = (Complex *) realloc(array, (i + 1) * sizeof(Complex));
            array[i] = *getComplexFromString(tmp);
        }
    } else throw FILE_OPENING_ERROR_EXCEPTION;
    this->in.close();
}

ComplexReader::~ComplexReader() {
    if (this->in.is_open()) this->in.close();
    free(this->array);
}

Complex *ComplexReader::getArray() {
    return this->array;
};

int ComplexReader::getLength() {
    return length;
};

int ComplexReader::getIntFromString(const string s) {
    int a;
    istringstream iss(s);
    iss >> a;
    return a;
};

Complex *ComplexReader::getComplexFromString(const string s) {
    float r, i;
    istringstream iss(s);
    iss >> r >> i;
    return new Complex(r, i);
};

