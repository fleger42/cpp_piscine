#ifndef PRESIDENTIALPARDON_FORM
#define PRESIDENTIALPARDON_FORM
#include <iostream>
#include <exception>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    public:
        virtual void execute(Bureaucrat const & executor) const;
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & copy);
        virtual ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & target);
    private:
        std::string target;
};
#endif