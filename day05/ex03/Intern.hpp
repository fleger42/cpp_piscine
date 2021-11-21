#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <exception>

class Intern
{
    public:
        Intern(void);
        Intern(Intern const & copy);
        ~Intern(void);
		Intern & operator=(Intern const & target);
		Form *makeForm(const std::string & first, const std::string & second) const;
		Form *createFormShruberry(const std::string & target) const;
		Form *createFormRobotomy(const std::string & target) const;
		Form *createFormPresidential(const std::string & target) const;
		class UnknownException : public std::exception
		{
			public:
				UnknownException(void) {};
				virtual const char * what() const throw()
				{
					return ("Unknown form error !");
				}
		};
};

typedef Form* (Intern:: *pf)(std::string const &) const;
#endif