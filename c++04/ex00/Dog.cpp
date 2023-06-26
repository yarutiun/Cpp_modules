/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:18:30 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/26 15:24:14 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    COUT << "Default Dog constructor" << ENDL;
}

Dog::~Dog()
{
    COUT << "Default Dog destructor" << ENDL;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.type;
    return(*this);
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

void Dog::makeSound(void) const
{
    COUT << "ARF ARF" << ENDL;   
}