//
// Created by Aleksandr on 2019-03-29.
//
#include <iostream>
#include "data/Complex.cpp"
#include "services/ComplexReader.cpp"
#include <cmath>

void complexStart(){
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

        cout << maxc;
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

