#include <iostream>
#include "Singleton.h"

int main() 
{
    TaskManager* m1 = TaskManager::instance();
    TaskManager* m2 = TaskManager::instance();

    if (m1 == m2) {
        std::cout << "Is the same obj" << std::endl;
    } else {
        std::cout << "not the same obj" << std::endl;
    }

    TaskManager2* m3 = TaskManager2::instance();
    TaskManager2* m4 = TaskManager2::instance();

    if (m3 == m4) {
        std::cout << "Is the same obj" << std::endl;
    }
    else {
        std::cout << "not the same obj" << std::endl;
    }

    return 0;
}