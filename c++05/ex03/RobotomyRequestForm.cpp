/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:02:24 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/10 15:02:54 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    std::cout << "Default RRF constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Default RRF destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf) : AForm(rrf)
{
    std::cout << "rrf copy construtor called" << std::endl;
    *this = rrf;
}


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("robotomy form", 72, 45)
{
    std::cout << "SCF target assigning constructor called" << std::endl;
    _target = target;
}

std::string RobotomyRequestForm::getTarget() const
{
    return(_target);
}

void  RobotomyRequestForm::execute() const {

	bool chance = (rand() % 100) < 50;
	if (chance)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << _target << " robotomization failed." << std::endl;
}