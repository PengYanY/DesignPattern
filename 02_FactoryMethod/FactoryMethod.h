#ifndef _FACTORY_METHOD_H
#define _FACTORY_METHOD_H
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

class Factory 
{
public:
    virtual Animal* create() = 0;
};

class DogFactory : public Factory
{
public:
    Animal* create() override;
};

class CatFactory : public Factory
{
public:
    Animal* create() override;
};


#endif
