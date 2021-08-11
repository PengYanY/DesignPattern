#ifndef SIMPLE_FACTORY_H
#define SIMPLE_FACTORY_H
#include <string>

class Animal 
{
public:
    virtual void eat() = 0;
};

class Dog : public Animal 
{
public:
    void eat() override;
};

class Cat : public Animal
{
public:
    void eat() override;
};

class Toy 
{
public:
    virtual void play() = 0;
};

class DogToy : public Toy 
{
public:
    void play() override;
};

class CatToy : public Toy
{
public:
    void play() override;
};

class Factory 
{
public:
    virtual Animal* bugAnimal() = 0;
    virtual Toy* bugToy() = 0;
};

class DogFactory : public Factory
{
public:
    Animal* bugAnimal() override;
    Toy* bugToy() override;
};

class CatFactory : public Factory
{
public:
    Animal* bugAnimal() override;
    Toy* bugToy() override;
};

#endif
