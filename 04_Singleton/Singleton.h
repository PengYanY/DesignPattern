#ifndef SINGLETON_H
#define SINGLETON_H
#include <string>
#include <mutex>

class TaskManager 
{
public:
    static TaskManager* instance();
private:
    TaskManager() {}
private:
    static TaskManager* m_instance;
    static std::mutex m_mutex;
};

class TaskManager2
{
public:
    static TaskManager2* instance();
private:
    TaskManager2();
private:
    static TaskManager2 m_instance;
};


#endif