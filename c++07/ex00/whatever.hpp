#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <class T> void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    // std::cout << a << std::endl << b << std::endl;
}

template <class T> T max(T &a, T &b)
{
    if(a == b)
        return(b);
    return( (a > b) ? a : b);
}

template <class T> T min(T &a, T &b)
{
    if(a == b)
        return(b);
    return( (a < b) ? a : b);
}

#endif