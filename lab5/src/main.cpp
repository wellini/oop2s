#include <iostream>
#include "Complex.cpp"
#include "Vector.cpp"

using namespace std;

int main() {
    cout << "Start test case 1:" << endl;

    Complex complex = Complex(1, 1);
    cout << complex << endl;

    cout << "End case 1" << endl << endl;

    cout << "Start test case 2:" << endl;
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    cout << "Module: " << (v1 + v2).getModule() << endl;
    cout << "End case 2" << endl << endl;
    return 0;
}