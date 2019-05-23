//
// Created by Aleksandr on 2019-05-01.
//

#ifndef LAB3_CHILD_H
#define LAB3_CHILD_H


class Child {
private:
    std::string name;
    std::string lastName;
    int age;
public:

    Child();

    Child(const std::string &name, const std::string &lastName, int age);

    virtual ~Child();

    std::string getName();

    Child *setName(std::string name);

    std::string getLastName();

    Child *setLastName(std::string lastName);

    int getAge();

    Child *setAge(int age);

};


#endif //LAB3_CHILD_H
