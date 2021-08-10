#include <iostream>
#include "FactoryMethod.h"

int main() 
{
    Factory* factory = nullptr;
    Animal* animal = nullptr;

    factory = new DogFactory();
    animal = factory->create();
    if (animal) {
        animal->eat();
        delete animal;
        animal = nullptr;
    }

    factory = new CatFactory();
    animal = factory->create();
    if (animal) {
        animal->eat();
        delete animal;
        animal = nullptr;
    }

    return 0;
}