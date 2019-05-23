#include <iostream>

#include "./models/Boss.cpp"
#include "./models/Student.cpp"
#include "./models/Human.cpp"

int main() {
    Boss b = Boss("Jorgiz", "kek", "Ivanovich", 3496, 1);
    Student s = Student("German", "Georgievich", "Jirinovskiy", 1, false);
    b.print();
    s.print();
    return 0;
}