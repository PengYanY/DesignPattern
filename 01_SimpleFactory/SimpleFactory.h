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

class Factory 
{
public:
    Animal* create(const std::string& name);
};


#endif
