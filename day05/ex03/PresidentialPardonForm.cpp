#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    this->checkForm(executor);
    std::cout << executor.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void) : Form("ShruberryCreationForm", 5, 25), target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("ShruberryCreationForm", 5, 25), target(target)
{

}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
{
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & target)
{
    this->target  = target.target;
	return (*this);
}