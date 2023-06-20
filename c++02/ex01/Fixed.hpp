/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:32:12 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/19 19:11:44 by yarutiun         ###   ########.fr       */
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
        int getRawBits(void);
        void setRawBits(int const raw);
        Fixed& operator=(const Fixed& object);
    
    private:
        static const int _numOfBits = 8;
        int _fixedVal;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &input);

#endif