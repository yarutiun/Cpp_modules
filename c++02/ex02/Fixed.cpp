/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:32:14 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/20 13:57:14 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedVal (0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int integer): _fixedVal(integer << _numOfBits)
{
    return;
}

Fixed::Fixed(const float floating): _fixedVal(roundf(floating * (1 << _numOfBits)))
{
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedVal;
}

int Fixed::toInt(void) const
{
    return((int)(this->_fixedVal) >> this->_numOfBits);
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixedVal / (float)(1 << this->_numOfBits);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedVal = raw;
}

Fixed &Fixed::operator=(const Fixed& object)
{
    _fixedVal = object._fixedVal;
    std::cout << "Copy assignment operator called " << std::endl;
    return *this;
}

std::ostream	&operator<<(std::ostream &output, Fixed const &input)
{
	output << input.toFloat();
	return output;
}

bool Fixed::operator<(const Fixed& object) const
{
    return(this->_fixedVal < object._fixedVal);
}

bool Fixed::operator>(const Fixed& object) const
{
    return(this->_fixedVal > object._fixedVal);
}

bool Fixed::operator<=(const Fixed& object) const
{
    return(this->_fixedVal <= object._fixedVal);
}

bool Fixed::operator>=(const Fixed& object) const
{
    return(this->_fixedVal >= object._fixedVal);
}

bool Fixed::operator!=(const Fixed& object) const
{
    return(this->_fixedVal != object._fixedVal);
}

bool Fixed::operator==(const Fixed& object) const
{
    return(this->_fixedVal == object._fixedVal);
}

int Fixed::operator+(const Fixed& object) const
{
    return(this->toFloat() + object.toFloat());
}

int Fixed::operator-(const Fixed& object) const
{
    return(this->toFloat() - object.toFloat());
}

int Fixed::operator*(const Fixed& object) const
{
    return(this->toFloat() * object.toFloat());
}

int Fixed::operator/(const Fixed& object) const
{
    return(this->toFloat() / object.toFloat());
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b) 
{
    return(a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b) 
{
    return(a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) 
{
    return(a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) 
{
    return(a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed Fixed::operator++(int number)
{
	Fixed temp(*this);
	this->_fixedVal++;
	return(temp);
}

Fixed Fixed::operator++(void)
{
	this->_fixedVal++;
	return(*this);
}

Fixed Fixed::operator--(int number)
{
	Fixed temp(*this);
	this->_fixedVal--;
	return(temp);
}

Fixed Fixed::operator--(void) {
	this->_fixedVal--;
	return(*this);
}