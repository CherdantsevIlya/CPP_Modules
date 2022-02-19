#ifndef DESKTOP_ITER_H
#define DESKTOP_ITER_H

#include <iostream>
#include <string>

template<typename T>
void print(T const& x)
{
    std::cout << x << std::endl;
    return;
}

template<typename T>
void iter(T *address, int length, void (*func)(T const& x))
{
    int i = 0;

    while (i < length)
        func(address[i++]);
}

#endif
