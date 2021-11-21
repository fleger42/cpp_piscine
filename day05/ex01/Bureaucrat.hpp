#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(int note, std::string name);
        Bureaucrat(Bureaucrat const & to_copy);
        ~Bureaucrat(void);
        Bureaucrat & operator=(Bureaucrat const & target);
        std::string getName(void) const;
        int getGrade(void) const;
        void increment(void);
        void decrement(void);
        void signForm(Form & to_sign);
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
        int grade;
};
std::ostream& operator<<(std::ostream& os, Bureaucrat & target);
#endif