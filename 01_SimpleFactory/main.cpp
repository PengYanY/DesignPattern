#include <iostream>
#include "SimpleFactory.h"

int main() 
{
    Factory factory;
    Animal* animal = nullptr;

    animal = factory.create("Dog");
    if (animal) {
        animal->eat();
        delete animal;
        animal = nullptr;
    }

    animal = factory.create("Cat");
    if (animal) {
        animal->eat();
        delete animal;
        animal = nullptr;
    }

    return 0;
}