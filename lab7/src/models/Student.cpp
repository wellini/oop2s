//
// Created by Aleksandr on 2019-05-23.
//

#include "Student.h"

Student::Student() {};

Student::Student(std::string surname, std::string name, std::string midname, int age, bool on_lesson) : Human(surname, name, midname, age){};

void Student::print() {
    std::cout << name << " "
              << surname << " "
              << midname << " "
              << age << " "
              << on_lesson << std::endl;
};

Student::~Student() {};