/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:14:18 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/11 15:45:37 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
private:
	std::string	_name;
	std::string	_target;
public:
	Intern();
	~Intern();

    std::string getName();
    std::string getTarget();
	AForm	*makeForm(std::string name, std::string target);

	class FormNotFound : public std::exception {
		virtual const char* what() const throw();
	};
};

#endif
