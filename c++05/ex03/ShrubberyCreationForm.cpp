/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:02:29 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/10 15:03:51 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
    std::cout << "default SCF constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        std::cout << "default SCF destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : AForm(scf)
{
    std::cout << "SCF copy constructor called" << std::endl;
    *this = scf;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("srubbery form", 145, 137)
{
    std::cout << "SCF target assigning constructor called" << std::endl;
    _target = target;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return(_target);
}

void ShrubberyCreationForm::execute() const {
	std::string	filename;

	filename = _target + "_shrubbery";
	std::ofstream output(filename.c_str(), std::ios::out);

	output << "          .     .  .      +     .      .          .\n"
			  "     .       .      .     #       .           .\n"
			  "        .      .         ###            .      .      .\n"
			  "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
			  "          .      . \"####\"###\"####\"  .\n"
			  "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
			  "  .             \"#########\"#########\"        .        .\n"
			  "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
			  "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
			  "                .\"##\"#####\"#####\"##\"           .      .\n"
			  "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
			  "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
			  "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
			  "            .     \"      000      \"    .     .\n"
			  "       .         .   .   000     .        .       .\n"
			  ".. .. ..................O000O........................ ......\nProd. Sick Luke (c'mon, you wanted me to make ascii art or what? XD)" << std::endl;

	output.close();

	std::cout << "Shrubbery has been planted." << std::endl;
}
