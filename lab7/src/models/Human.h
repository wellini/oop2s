//
// Created by Aleksandr on 2019-05-23.
//

#ifndef LAB7_HUMAN_H
#define LAB7_HUMAN_H

#include <string>
#include <iostream>

class Human {
protected:
    std::string surname;
    std::string name;
    std::string midname;
    int age;

public:
    Human();
    Human(std::string surname, std::string name, std::string midname, int age);
    virtual void print() = 0;
    ~Human();
};


#endif //LAB7_HUMAN_H
