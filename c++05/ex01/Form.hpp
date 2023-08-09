#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form();
        ~Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form &a);
        Form& operator=(const Form &a);
        void beSigned(Bureaucrat &a);
        std::string getName(void) const;
        bool getIfSigned(void) const;
        int getRequiredGrade(void) const;
        int getRequiredExec(void) const;
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

std::ostream& operator<< (std::ostream &stream, const Form &form);

#endif