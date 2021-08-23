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

//һ����˵��CPU��RAM�� DiskҲ�Ƕ�Ӧ�Ŷ����
//��ͬƷ�ƶ�Ӧ�����������ʽ�ǲ�ͬ�ģ���Computer�ⲽ������Ҫ��ע��ô���ɵ�
//����������builder����
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
    //������Ե���װ���ǰ�˳�����ģ�������CPU����ram��Ȼ��disk
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
        //������˵��Щset��������һ�������ȥ���������������Щ���󣬴˴�����Ҫ����
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
        //������˵��Щset��������һ�������ȥ���������������Щ���󣬴˴�����Ҫ����
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