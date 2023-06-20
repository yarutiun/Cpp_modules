/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:32:14 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/19 18:24:26 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedVal (0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &f)
// :_fixedVal(f._fixedVal)
{
    // f = *this;
    *this = f;
    // this->_fixedVal = f._fixedVal;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    // std::cout << _fixedVal << std::endl;
    return _fixedVal;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedVal = raw;
}

Fixed &Fixed::operator=(const Fixed& object)
{
    // this->__fixedVal = object.__fixedVal;
    _fixedVal = object._fixedVal;
    std::cout << "Copy assignment operator called " << std::endl;
    return *this;
}