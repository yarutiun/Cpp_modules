/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:00:05 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/09 17:00:06 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _ifSigned(false), _name("Cool name"), _requiredExec(0), _requiredGrade(0)
{
    std::cout << "Default FORM constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Default FORM denstructor is called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _requiredGrade(gradeSign), _requiredExec(gradeExec)
{
    std::cout << "Name FORM assigning constructor" << std::endl;
}

Form::Form(const Form &a) : _name(a._name), _requiredExec(a._requiredExec), _requiredGrade(a._requiredGrade)
{
    std::cout << "Copy FORM constuctor called" << std::endl;
    *this = a;
}

Form &Form::operator=(const Form &a)
{
    this->_ifSigned = a._ifSigned;
    std::cout << "Assignment FORM operator overload called" << std::endl;
    return(*this);
}

void Form::beSigned(Bureaucrat &a)
{
    if(a.getGrade() < 1)
        throw Form::GradeTooHighException();
    if(a.getGrade() > 150)
        throw Form::GradeTooLowException();
    if(a.getGrade() <= _requiredGrade)
        this->_ifSigned = true;
    if(a.getGrade() > _requiredGrade)
        std::cout << "Form couldn't be signed" << std::endl;
}

std::string Form::getName(void) const
{
    return(this->_name);
}

bool Form::getIfSigned(void) const
{
    return(this->_ifSigned);
}

int Form::getRequiredGrade(void) const
{
    return(_requiredGrade);
}

int Form::getRequiredExec(void) const
{
    return(_requiredExec);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

std::ostream& operator<<(std::ostream &stream, const Form &form)
{
    stream << form.getName() << "is a name of the form" << std::endl;
    if(form.getIfSigned())
        stream << "Form is signed" << std::endl;
    else
        stream << "Form is now signed" << std::endl;
    stream << form.getRequiredExec() << "is a grade required to execute" << std::endl;
    stream << form.getRequiredGrade() << "is a grade required to sign" << std::endl;
    return stream;
}
