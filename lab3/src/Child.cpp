//
// Created by Aleksandr on 2019-05-01.
//

#include "Child.h"


std::string Child::getName() {
    return name;
}

Child *Child::setName(std::string name) {
    this->name = name;
    return this;
}

std::string Child::getLastName() {
    return lastName;
}

Child *Child::setLastName(std::string lastName) {
    this->lastName = lastName;
    return this;
}

int Child::getAge() {
    return age;
}

Child *Child::setAge(int age) {
    this->age = age;
    return this;
}