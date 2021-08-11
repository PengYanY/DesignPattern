#include "AbstractFactory.h"
#include <iostream>

void Dog::eat()
{
    std::cout << "Dog::eat" << std::endl;
}

void Cat::eat()
{
    std::cout << "Cat::eat" << std::endl;
}

Animal* DogFactory::create()
{
    return new Dog();
}

Animal* CatFactory::create()
{
    return new Cat();
}
void play() override;
};

class CatToy : public Toy
{
public:
    void play() override;