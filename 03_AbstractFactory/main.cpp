#include <iostream>
#include "AbstractFactory.h"

int main() 
{
    Factory* factory = nullptr;
    Animal* animal = nullptr;
    Toy* toy = nullptr;

    factory = new DogFactory();
    animal = factory->bugAnimal();
    toy = factory->bugToy();
    if (animal) {
        animal->eat();
        delete animal;
        animal = nullptr;
    }

    if (toy) {
        toy->play();
        delete toy;
        toy = nullptr;
    }

    factory = new CatFactory();
    animal = factory->bugAnimal();
    toy = factory->bugToy();
    if (animal) {
        animal->eat();
        delete animal;
        animal = nullptr;
    }

    if (toy) {
        toy->play();
        delete toy;
        toy = nullptr;
    }

    return 0;
}