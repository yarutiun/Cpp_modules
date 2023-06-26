/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:40:56 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/26 15:47:39 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimalisimo")
{
    std::cout << "Default Wrong WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default Wrong WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->type = obj.type;
    return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong WrongAnimal does I am cringe" << std::endl;   
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}
