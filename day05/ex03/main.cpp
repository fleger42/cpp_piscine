#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (void)
{
    Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Bureaucrat bad(100, "Eban");

	try
	{
		rrf->beSigned(bad);
		rrf->execute(bad);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat strong(1, "Eban");
	try
	{
		rrf->beSigned(strong);
		rrf->execute(strong);
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Form* unknownf;
		unknownf = someRandomIntern.makeForm("robouest", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete rrf;
}