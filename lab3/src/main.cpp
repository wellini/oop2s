//
// Created by Aleksandr on 2019-03-22.
//
#include <iostream>
#include "data/Complex.cpp"
#include "services/ComplexReader.cpp"

int main(){
    try {
        ComplexReader *reader = new ComplexReader("assets/complex.txt");

        Complex * array = reader->getArray();
        int length = reader->getLength();

        for (int i = 0; i < length; ++i) {
            cout << array[i] << endl;
        }

        delete reader;
    } catch (int i){
        string message;
        switch (i){
            case FILE_OPENING_ERROR_EXCEPTION:
                message = "File opening error";
        }
        cout << message;
    }
    return 0;
}
