/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:41:35 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/26 15:54:16 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongWrongCat";
    std::cout << "Default WrongWrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongWrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.type;
    return(*this);
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Murr Murr MIAU" << std::endl;   
}