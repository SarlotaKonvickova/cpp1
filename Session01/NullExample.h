#ifndef CPP1_NULLEXAMPLE_H
#define CPP1_NULLEXAMPLE_H

#include <iostream>
#include "AllocationMemory.h"


void Foo(int i)
{
    std::cout << i << std::endl;

}

void Foo(int* i)
{
    //null ukazuje do 0 na pamet 0 - nepovoleny pristup do pameti
    std::cout << i << std::endl;
    int id;
    std::cin >> id;
}

void Sample()
{
    Foo(NULL);
    Foo(nullptr);
}

#endif //CPP1_NULLEXAMPLE_H
