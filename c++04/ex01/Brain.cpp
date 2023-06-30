/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:10:06 by yarutiun          #+#    #+#             */
/*   Updated: 2023/06/27 09:59:21 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = obj._ideas[i];
    return(*this);
}
