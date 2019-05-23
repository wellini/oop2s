//
// Created by Aleksandr on 2019-05-23.
//

#ifndef LAB7_BOSS_H
#define LAB7_BOSS_H

#include "Human.h"

class Boss : public Human{
private:
    int number_of_workers;
public:
    Boss();
    Boss(std::string surname, std::string name, std::string midname, int age, int number_of_workers);
    virtual void print();
    ~Boss();
};


#endif //LAB7_BOSS_H
