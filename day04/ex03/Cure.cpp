#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
    std::cout << "Cure constructor default" << std::endl;
    this->type = "cure"; 
    return ;
}
Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
    return ;
}
Cure::Cure(Cure const & copy) : AMateria()
{
	this->type = "cure";
    std::cout << "Cure constructor copy called" << std::endl;
    *this = copy;
    return ;
}

Cure & Cure::operator=(Cure const & target)
{
	(void)target;
    std::cout << "Cure constructor overload operator '=' called (TO CHANGE)" << std::endl;
    return *this;
}
AMateria* Cure::clone(void) const
{
    std::cout << "Cure clone function called" << std::endl;
    AMateria *ret = new Cure();
    return (ret);
}

void Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
    return ;
}