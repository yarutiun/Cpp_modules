/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 16:29:22 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/17 01:06:33 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdlib.h>

ScalarConversion::ScalarConversion()
{
    std::cout << "default ScalarConversion constructor called" << std::endl;
}

ScalarConversion::~ScalarConversion()
{
    std::cout << "default ScalarConversion destructor called" << std::endl;
}

ScalarConversion::ScalarConversion(const ScalarConversion &sc)
{
    *this = sc;
    std::cout << "ScalarConversion copy constructor called" << std::endl;
}

ScalarConversion &ScalarConversion::operator=(const ScalarConversion &sc)
{
    std::cout << "osigning operator overload called" << std::endl;
    return(*this);
}

void ScalarConversion::convert()
{
    const float c = atof(_input.c_str());
    const int a = static_cast<int>(c);
    const char b = static_cast<char>(c);
    const double d = static_cast<double>(c);
    std::cout << b << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;  
}

void ScalarConversion::setInput(std::string str) { _input = str; }
std::string ScalarConversion::getInput(void) { return(_input); }
