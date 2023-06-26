/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:55:15 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/26 15:19:23 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animalisimo")
{
    COUT << "Default Animal constructor" << ENDL;
}

Animal::~Animal()
{
    COUT << "Default Animal destructor" << ENDL;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.type;
    return(*this);
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

void Animal::makeSound(void) const
{
    COUT << "Animal does qfiwshaoefdwaidnofnwoaeodfiwoads (this is chupakabra)" << ENDL;   
}

std::string Animal::getType(void) const
{
    return(this->type);
}
