//
// Created by Aleksandr on 2019-05-23.
//

#ifndef LAB7_STUDENT_H
#define LAB7_STUDENT_H

#include "Human.h"

class Student : public Human{
private:
    bool on_lesson;
public:
    Student();
    Student(std::string surname, std::string name, std::string midname, int age, bool on_lesson);
    virtual void print();
    ~Student();
};


#endif //LAB7_STUDENT_H
