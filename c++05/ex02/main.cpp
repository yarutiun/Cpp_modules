/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:31:30 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/10 15:08:32 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Bureaucrat myBur("Roberto");
    myBur.setGrade(2);
	Bureaucrat secondBur("Johnny");

	ShrubberyCreationForm shrubbery("home");
	RobotomyRequestForm roboto("Roboto");
	PresidentialPardonForm presidential("Pardon");

	try {

		shrubbery.beSigned(myBur);
		roboto.beSigned(myBur);
		presidential.beSigned(myBur);

		shrubbery.AForm::execute(myBur);
		roboto.AForm::execute(myBur);
		presidential.AForm::execute(myBur);

	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

	try {

		shrubbery.beSigned(secondBur);
		roboto.beSigned(secondBur);
		presidential.beSigned(secondBur);

		shrubbery.AForm::execute(secondBur);
		roboto.AForm::execute(secondBur);
		presidential.AForm::execute(secondBur);

	} catch (std::exception &error) {
		std::cout << error.what() << std::endl;
	}

}