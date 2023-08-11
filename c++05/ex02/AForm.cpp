/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:04:54 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/09 17:20:12 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _ifSigned(false), _name("Cool name"), _requiredExec(0), _requiredGrade(0)
{
    std::cout << "Default AForm constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Default AForm denstructor is called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _requiredGrade(gradeSign), _requiredExec(gradeExec)
{
    std::cout << "Name AForm assigning constructor" << std::endl;
}

AForm::AForm(const AForm &a) : _name(a._name), _requiredExec(a._requiredExec), _requiredGrade(a._requiredGrade)
{
    std::cout << "Copy AForm constuctor called" << std::endl;
    *this = a;
}

AForm &AForm::operator=(const AForm &a)
{
    this->_ifSigned = a._ifSigned;
    std::cout << "Assignment AForm operator overload called" << std::endl;
    return(*this);
}

void AForm::beSigned(Bureaucrat &a)
{
    if(a.getGrade() < 1)
        throw AForm::GradeTooHighException();
    if(a.getGrade() > 150)
        throw AForm::GradeTooLowException();
    if(a.getGrade() <= _requiredGrade)
        this->_ifSigned = true;
    if(a.getGrade() > _requiredGrade)
        std::cout << "AForm couldn't be signed" << std::endl;
}

std::string AForm::getName(void) const
{
    return(this->_name);
}

bool AForm::getIfSigned(void) const
{
    return(this->_ifSigned);
}

int AForm::getRequiredGrade(void) const
{
    return(_requiredGrade);
}

int AForm::getRequiredExec(void) const
{
    return(_requiredExec);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

std::ostream& operator<<(std::ostream &stream, const AForm &AForm)
{
    stream << AForm.getName() << "is a name of the AForm" << std::endl;
    if(AForm.getIfSigned())
        stream << "AForm is signed" << std::endl;
    else
        stream << "AForm is now signed" << std::endl;
    stream << AForm.getRequiredExec() << "is a grade required to execute" << std::endl;
    stream << AForm.getRequiredGrade() << "is a grade required to sign" << std::endl;
    return stream;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if(!_ifSigned)
    {
        std::cout << "Couldn't execute because the form wasn't signed" << std::endl;
        return ;
    }
    if(executor.getGrade() > _requiredExec)
        throw GradeTooHighException();
    else
        this->execute();
}

void AForm::execute() const { };