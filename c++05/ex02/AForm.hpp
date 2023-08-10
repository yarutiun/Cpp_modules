/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:00:16 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/10 14:58:23 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <fstream>
// #include "ShrubberyCreationForm.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm();
        ~AForm();
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm(const AForm &a);
        AForm& operator=(const AForm &a);
        void beSigned(Bureaucrat &a);
        std::string getName(void) const;
        bool getIfSigned(void) const;
        int getRequiredGrade(void) const;
        int getRequiredExec(void) const;
        void execute(Bureaucrat const & executor) const;
        virtual void execute() const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

    private:
        bool                    _ifSigned;
        const std::string       _name;
        const int               _requiredGrade;
        const int               _requiredExec;
};

std::ostream& operator<< (std::ostream &stream, const AForm &Aform);

#endif