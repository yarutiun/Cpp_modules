/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:18:30 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 13:35:27 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    COUT << "Default Dog constructor" << ENDL;
}

Dog::~Dog()
{
    delete this->brain;
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