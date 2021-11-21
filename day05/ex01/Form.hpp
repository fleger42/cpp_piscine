#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);
        Form(std::string name, int grade_exe, int grade_sign);
        Form(Form const & copy);
        ~Form(void);
        std::string getName(void) const;
        int getGradeExe(void) const;
        int getGradeSign(void) const;
        int getState(void) const;
        Form & operator=(Form const & target);
        void beSigned(Bureaucrat & human);
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(void) {}
                virtual const char *what() const throw()
                {
                    return "Oh ! An unexpected error has occured. Code:'GradeTooLowException'";
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(void) {}
                virtual const char *what() const throw()
                {
                    return "Oh ! An unexpected error has occured. Code:'GradeTooHighException'";
                }
        };
    private:
        const std::string name;
        bool done;
        const int grade_exe;
        const int grade_sign;
};
std::ostream& operator<<(std::ostream& os, Form & target);
#endif