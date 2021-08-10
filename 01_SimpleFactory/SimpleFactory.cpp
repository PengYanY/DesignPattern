#include "SimpleFactory.h"
#include <iostream>

void Dog::eat()
{
    std::cout << "Dog::eat" << std::endl;
}

void Cat::eat()
{
    std::cout << "Cat::eat" << std::endl;
}

Animal* Factory::create(const std::string& name)
{
    if (name == "Dog") {
        return new Dog();
    }else if (name == "Cat") {
        return new Cat();
    }

    return nullptr;
}