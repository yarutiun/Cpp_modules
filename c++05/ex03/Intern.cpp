/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:04:55 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/11 15:47:15 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "default Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "default Intern destructor called" << std::endl;
}

AForm *returnPresidentialForm(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm *returnRobotomyForm(std::string target) {
	return new RobotomyRequestForm(target);
}

AForm *returnShrubberyForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

std::string Intern::getName() {return(_name);}

std::string Intern::getTarget() {return(_target);}

AForm *Intern::makeForm(std::string name, std::string target) {

	AForm *(*func_ptr[3])(std::string) = {
			returnPresidentialForm,
			returnRobotomyForm,
			returnShrubberyForm
	};

	std::string formsTemplates[3] = {
			"pardon",
			"robotomy",
			"shrubbery"
	};

	for(int i = 0; i < 3; i++) {
		if(!name.compare(formsTemplates[i])) {
			std::cout << "Intern creates [" + name + "]" << std::endl;
			return func_ptr[i](target);
		}
	}

	throw Intern::FormNotFound();
}

const char *Intern::FormNotFound::what() const throw() {
	return("Form template not found.");
}
