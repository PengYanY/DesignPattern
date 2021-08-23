#include <iostream>
#include "Builder.h"

int main() 
{
    Builder* b1 = new LenovoBuilder();
    Director* dir = new Director(b1);
    Computer* c = dir->buildComputer();
    c->run();

    delete dir;
    delete c;
    delete b1;

    b1 = new AUSUBuilder();
    dir = new Director(b1);
    c = dir->buildComputer();
    c->run();

    delete dir;
    delete c;
    delete b1;

    return 0;
}