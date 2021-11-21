#include "Ice.hpp" 

Ice::Ice(void) : AMateria()
{
    std::cout << "Ice constructor default" << std::endl;
    this->type = "ice"; 
    return ;
}
Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
    return ;
}
Ice::Ice(Ice const & copy) : AMateria()
{
	this->type = "ice";
    std::cout << "Ice constructor copy called" << std::endl;
    *this = copy;
    return ;
}

Ice & Ice::operator=(Ice const & target)
{
	(void)target;
    std::cout << "Ice constructor overload operator '=' called" << std::endl;
    return *this;
}
AMateria* Ice::clone(void) const
{
    std::cout << "Ice clone function called" << std::endl;
    AMateria *ret = new Ice();
    return (ret);
}

void Ice::use(ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
    return ;
}