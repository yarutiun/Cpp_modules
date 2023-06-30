/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:18:27 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 13:35:23 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    COUT << "Default Cat constructor" << ENDL;
}

Cat::~Cat()
{
    delete this->brain;
    COUT << "Default Cat destructor" << ENDL;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    return(*this);
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
}

void Cat::makeSound(void) const
{
    COUT << "Murr Murr MIAU" << ENDL;   
}