#include <iostream>
#include "Monitor.cpp"
#include "Student.cpp"
#include "./alives/animals/Dog.cpp"
#include "./alives/animals/Cat.cpp"
#include "./alives/Alive.cpp"
#include "./alives/Bird.cpp"
#include "./alives/Fish.cpp"
#include "./alives/Animal.cpp"

int main() {
    Monitor m = Monitor();
    m.visitUniversity();
    m.visitUniversity();
    m.visitUniversity();
    m.visitUniversity();
    m.punish();

    Dog dog = Dog();
    Cat cat = Cat();
    Animal animal = Animal();
    Alive alive = Alive();
    Fish fish = Fish();
    Bird bird = Bird();

    dog.bark();
    dog.doSomething();
    dog.live();

    alive.live();

    fish.swim();
    fish.live();

    return 0;
}