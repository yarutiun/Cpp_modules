/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:32:12 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/20 13:55:59 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(const int integer);
        Fixed(const float floating);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed& operator=(const Fixed& object);
        bool operator<(const Fixed& object) const;
        bool operator>(const Fixed& object) const;
        bool operator<=(const Fixed& object) const;
        bool operator>=(const Fixed& object) const;
        bool operator==(const Fixed& object) const;
        bool operator!=(const Fixed& object) const;
        int  operator/(const Fixed& object) const;
        int  operator+(const Fixed& object) const;
        int  operator-(const Fixed& object) const;
        int  operator*(const Fixed& object) const;
        Fixed operator++(int number);
        Fixed operator++(void);
        Fixed operator--(int number);
        Fixed operator--(void);
        static Fixed const& max(const Fixed &a, const Fixed &b);
        static Fixed const& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);
    
    private:
        static const int _numOfBits = 8;
        int _fixedVal;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &input);

#endif