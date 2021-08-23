#ifndef _BUILDER_H
#define _BUILDER_H
#include <string>
#include <iostream>
#include <mutex>
class Computer 
{
public:
    virtual void setCPU() = 0;
    virtual void setRAM() = 0;
    virtual void setDisk() = 0;

    virtual void run() = 0;
};

//一般来说，CPU，RAM， Disk也是对应着对象的
//不同品牌对应的组件生产方式是不同的，在Computer这步，不需要关注怎么生成的
//可以体现在builder里面
class AUSUComputer : public Computer 
{
public:
    void setCPU() override 
    {
        std::cout << "AUSUComputer::setCPU" << std::endl;
    }

    void setRAM() override
    {
        std::cout << "AUSUComputer::setRAM" << std::endl;
    }

    void setDisk() override
    {
        std::cout << "AUSUComputer::setDisk" << std::endl;
    }

    void run() override
    {
        std::cout << "AUSUComputer::run" << std::endl;
    }
};


class LenovoComputer : public Computer
{
public:
    void setCPU() override
    {
        std::cout << "LenovoComputer::setCPU" << std::endl;
    }

    void setRAM() override
    {
        std::cout << "LenovoComputer::setRAM" << std::endl;
    }

    void setDisk() override
    {
        std::cout << "LenovoComputer::setDisk" << std::endl;
    }

    void run() override
    {
        std::cout << "LenovoComputer::run" << std::endl;
    }
};

class Builder
{
public:
    virtual void buildCPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildDisk() = 0;
    //假设电脑的组装都是按顺序来的，都是先CPU，再ram，然后disk
    Computer* getComputer(){ return m_computer; }
protected:
    Computer* m_computer = nullptr;
};

class AUSUBuilder : public Builder 
{
public:
    AUSUBuilder() 
    {
        m_computer = new AUSUComputer();
    }

    void buildCPU() override
    {
        //正常来说这些set都是设置一个对象进去，具体如何生成这些对象，此处不需要考虑
        m_computer->setCPU();
    }
    void buildRAM() override
    {
        m_computer->setRAM();
    }
    void buildDisk() override 
    {
        m_computer->setDisk();
    }
};

class LenovoBuilder : public Builder
{
public:
    LenovoBuilder()
    {
        m_computer = new LenovoComputer();
    }

    void buildCPU() override
    {
        //正常来说这些set都是设置一个对象进去，具体如何生成这些对象，此处不需要考虑
        m_computer->setCPU();
    }
    void buildRAM() override
    {
        m_computer->setRAM();
    }
    void buildDisk() override
    {
        m_computer->setDisk();
    }
};

class Director 
{
public:
    Director(Builder* builder)
        : m_builder(builder)
    {
    }

    Computer* buildComputer()
    {
        m_builder->buildCPU();
        m_builder->buildRAM();
        m_builder->buildDisk();

        return m_builder->getComputer();
    }
private:
    Builder* m_builder = nullptr;
};

#endif