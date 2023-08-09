/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:58:45 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/09 15:45:59 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

Bureaucrat::Bureaucrat(): _grade(75), _name("Jobcenter Jerk")
{
    std::cout << "Default BURO constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str): _grade(75), _name(str)
{
    std::cout << "Name BURO assigning constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default BURO destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    std::cout << "Copy BURO constructor called" << std::endl;
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Assign operator called" << std::endl;
    this->_grade = obj._grade;
    return(*this);
}

std::string Bureaucrat::getName() const 
{ 
    return (this->_name);
}

int Bureaucrat::getGrade() const 
{ 
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if(this->_grade-1 < 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if(_grade+1 > 150)
        throw GradeTooLowException();
    _grade++;
}

Bureaucrat::Bureaucrat(int grade): _grade(grade)
{
    std::cout << "Grade assigning constructor called" << std::endl;
    if(_grade > 150)
        throw GradeTooLowException();
    if(_grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::signForm(const Form &form)
{
    if(form.getIfSigned() == true)
    {
        std::cout << this->_name << "signed this form: " << form.getName() << std::endl;
        return ;
    }
    else
        std::cout << this->_name << " couldn't assign" << form.getName() << "because it was shitty" << std::endl;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &bur)
{
    stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return stream;
}
