//
// Created by Aleksandr on 2019-03-29.
//
#include <iostream>
#include "data/Complex.cpp"
#include "services/ComplexReader.cpp"
#include <cmath>

void complexStartReadingFromFile(){
    try {
        ComplexReader *reader = new ComplexReader("assets/complex.txt");

        Complex * array = reader->getArray();
        int length = reader->getLength();

        Complex maxc = array[0];
        float maxAbs;
        for (int i = 0; i < length; ++i) {
            float currentAbs = sqrt(array[i].getReal()*array[i].getReal() + array[i].getImagine()*array[i].getImagine());
            if (currentAbs > maxAbs) maxc = array[i];
        }

        cout << "Max complex in file: " << maxc;
        delete reader;
    } catch (int i){
        string message;
        switch (i){
            case FILE_OPENING_ERROR_EXCEPTION:
                message = "File opening error";
        }
        cout << message;
    }
}

void complexStartMathOperationsDemo(){
    Complex c1, c2, result;
    char sign;

    cout << "Enter math sentence (for example <real> <imagine> <+|-|*|/> <real> <imagine>)" << endl;
    cin >> c1 >> sign >> c2;
    switch (sign){
        case '+':
            result = c1 + c2;
            break;
        case '-':
            result = c1 - c2;
            break;
        case '*':
            result = c1 * c2;
            break;
        case '/':
            try {
                result = c1 / c2;
            } catch (DIVISION_BY_ZERO_EXCEPTION){
                cout << "You are attempting to divide by zero!" << endl;
            }

            break;
    }
}

