/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:09:45 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/17 17:25:03 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));   
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data *d = new Data;
    uintptr_t ptr;
    std::cout << d << std::endl;
    ptr = serialize(d);
    std::cout << ptr << std::endl;
    d = deserialize(ptr);
    std::cout << d << std::endl;
    return(0);
}