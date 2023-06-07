/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:56:19 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/07 11:01:00 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string whatType): type(whatType)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string& Weapon::getType(void)
{
    std::string &typeReference = this->type;
    return(typeReference);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}