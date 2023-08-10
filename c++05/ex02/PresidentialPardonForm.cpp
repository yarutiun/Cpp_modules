/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:02:21 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/10 14:33:20 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
    std::cout << "Defalut PPF constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Defalut PPF destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf) : AForm(ppf)
{
    std::cout << "PPF copy constructor called" << std::endl;
    *this = ppf;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("presidential form", 25, 5)
{
    std::cout << "SCF target assigning constructor called" << std::endl;
    _target = target;
}

std::string PresidentialPardonForm::getTarget() const
{
    return(_target);
}

void PresidentialPardonForm::execute() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}