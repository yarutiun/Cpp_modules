/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:23:16 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/20 16:22:24 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    Fixed a;
    // Fixed b(a);

    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    
    std::cout << ++a << std::endl;
    
    std::cout << a << std::endl;
    
    std::cout << a++ << std::endl;
    
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}