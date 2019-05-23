//
// Created by Aleksandr on 2019-05-23.
//

#include "Boss.h"

Boss::Boss() {};

Boss::Boss(std::string surname, std::string name, std::string midname, int age, int number_of_workers) : Human(surname, name, midname, age){};

void Boss::print() {
    std::cout << name << " "
              << surname << " "
              << midname << " "
              << age << " "
              << number_of_workers << std::endl;
};

Boss::~Boss() {};