/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:16:07 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/17 17:18:02 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Data::Data()
{
    std::cout << "default constructor was called" << std::endl;
}

Data::~Data()
{
    std::cout << "default destructor was called" << std::endl;
}

Data::Data(const Data &d)
{
    *this = d;
    std::cout << "copy constructor was called" << std::endl;
}

Data &Data::operator=(const Data &d)
{
    this->i = d.i;
    this->j = d.j;
    return(*this);
}