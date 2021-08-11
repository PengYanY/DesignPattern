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

Animal* DogFactory::bugAnimal()
{
    return new Dog();
}

Animal* CatFactory::bugAnimal()
{
    return new Cat();
}

Toy* DogFactory::bugToy()
{
    return new DogToy();
}

Toy* CatFactory::bugToy()
{
    return new CatToy();
}

void DogToy::play()
{
    std::cout << "DogToy::play" << std::endl;
}

void CatToy::play()
{
    std::cout << "CatToy::play" << std::endl;
}