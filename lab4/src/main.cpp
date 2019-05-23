#include <iostream>
#include "Child.cpp"
#include "Tiles.cpp"
#include "Complex.cpp"
#include "Vector.cpp"

using namespace std;

int main() {
    cout << "Start test case 1:" << endl;
    Child c1 = Child();
    Child c2 = Child();
    c1.setName("Name 1")
            ->setLastName("Last name 1")
            ->setAge(11);
    c2.setName("Name 2")
            ->setLastName("Last name 2")
            ->setAge(12);
    cout << c1.getName() << " "
         << c1.getLastName() << " "
         << c1.getAge() << endl;

    cout << c2.getName() << " "
         << c2.getLastName() << " "
         << c2.getAge() << endl;

    cout << "End case 1" << endl;

    cout << "Start test case 2:" << endl << endl;

    Tiles t1 = Tiles();
    Tiles t2 = Tiles();

    t1.brand = "Famous Brand";
    t1.price = 10;
    t1.size_h = 130;
    t1.size_w = 100;

    t2.brand = "Unfamous Brand";
    t2.price = 1;
    t2.size_h = 130;
    t2.size_w = 100;

    cout << t1.getData() << endl;
    cout << t2.getData() << endl;

    cout << "End case 2" << endl << endl;

    cout << "Start test case 3:" << endl;

    Complex complex = Complex(1, 1);
    cout << complex << endl;

    cout << "End case 3" << endl << endl;

    cout << "Start test case 4:" << endl;
    Vector v1 = Vector(1, 2);
    Vector v2 = Vector(1, 2);
    cout << "Module: " << (v1 + v2).getModule() << endl;
    cout << "End case 4" << endl << endl;
    return 0;
}