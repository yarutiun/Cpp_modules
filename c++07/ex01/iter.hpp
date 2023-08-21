#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <class T> void print(T &elem)
{
    std::cout << elem << std::endl;
}

template <class T> void iter(T *addr, T len, void (*print)(T &elem))
{
    for(int i = 0; i < len; i++)
        print(addr[i]);
}

#endif