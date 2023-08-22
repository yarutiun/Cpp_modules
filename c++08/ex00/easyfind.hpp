#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <array>
#include <iterator>

template <class T> int easyfind(T &type, int n)
{
    typename T::iterator it;
    it = std::find(type.begin(), type.end(), n);
    if (it != type.end())
    {
        std::cout << "Element " << n << " found at position : ";
        std::cout << it - type.begin() << " (counting from zero) \n";
        return(0);
    }
    else
    {
        std::cout << "Element " << n << " occurence was not found within your container" << std::endl;
        return(1);
    }
}

#endif