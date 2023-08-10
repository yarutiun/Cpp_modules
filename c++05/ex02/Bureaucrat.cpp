/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:58:45 by yarutiun          #+#    #+#             */
/*   Updated: 2023/08/10 14:56:45 by yarutiun         ###   ########.fr       */
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
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str): _grade(75), _name(str)
{
    std::cout << "Name assigning constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    std::cout << "Copy constructor called" << std::endl;
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

void Bureaucrat::setGrade(int grade)
{
    _grade = grade;
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

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &bur)
{
    stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return stream;
}

void Bureaucrat::executeForm(AForm const & form)
{
    if (this->_grade > form.getRequiredExec())
        std::cout << this->getName() << " couldn't execute the form" << std::endl;
    else
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
}