#include "Singleton.h"
#include <iostream>

TaskManager* TaskManager::m_instance = nullptr;
std::mutex TaskManager::m_mutex;

TaskManager* TaskManager::instance()
{   
    //��������Ҫ�����ģ�������߳�����³��ִ��������������
    m_mutex.lock();
    if (!m_instance) {
        m_instance = new TaskManager();
    }
    m_mutex.unlock();

    return m_instance;
}

TaskManager2 TaskManager2::m_instance;
TaskManager2* TaskManager2::instance()
{
    return &m_instance;
}

TaskManager2::TaskManager2()
{
    std::cout << "TaskManager2::TaskManager2" << std::endl;
}