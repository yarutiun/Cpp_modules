/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 16:29:22 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/18 13:47:58 by yarutiun         ###   ########.fr       */
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
   	if (c < CHAR_MIN || c > CHAR_MAX || isnan(c)) {
		std::cout << "char: impossible" << std::endl;
	} else if (isprint(b)) {
		std::cout << "char: '" << b << "'" << std::endl;
	} else {
		std::cout << "char: non displayable" << std::endl;
	}

	if (a < INT_MIN || a > INT_MAX || isnan(c)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << a << std::endl;
	}

	if (c - a == 0) {
		std::cout << "float: " << c << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	} else {
		std::cout << "float: " << c << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void ScalarConversion::setInput(std::string str) { _input = str; }
std::string ScalarConversion::getInput(void) { return(_input); }
