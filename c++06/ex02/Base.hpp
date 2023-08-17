/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:33:24 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/17 20:50:28 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef BASE_HPP
#define BASE_HPP

class Base{
    public:
        virtual ~Base();  
};

// virtual Base::~Base()
// {
//     std::cout << "Destructor called" << std::endl;
// }

#endif