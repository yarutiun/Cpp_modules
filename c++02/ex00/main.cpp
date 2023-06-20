/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:32:16 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/19 18:22:14 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b(a);
    Fixed c;
        
    c = b;
        
        std::cout << a.getRawBits() << std::endl;
    
        std::cout << b.getRawBits() << std::endl;
    
        std::cout << c.getRawBits() << std::endl;
    return 0;
}