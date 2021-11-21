#include "Intern.hpp"

Intern::Intern(void)
{
    return ;    
}

Intern::~Intern(void)
{
    return ;    
}

Intern::Intern(Intern const & copy)
{
    *this = copy;
    return ; 
}

Intern & Intern::operator=(Intern const & target)
{
	(void)target;
    return *this;    
}

Form *Intern::createFormShruberry(const std::string & target) const
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::createFormRobotomy(const std::string & target) const
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::createFormPresidential(const std::string & target) const
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(const std::string & first, const std::string & second) const
{
	pf tab[4] = {&Intern::createFormRobotomy, &Intern::createFormPresidential, &Intern::createFormShruberry};
	std::string identity[] = {"robotomy request", "presidential request", "shruberry request"};
	
	for(int i = 0; i < 3; i++)
	{
		if(first.compare(identity[i]) == 0)
			return((this->*tab[i])(second));
		else if(i == 2)
		{
			throw UnknownException();
		}
	}
	return(NULL);
}
