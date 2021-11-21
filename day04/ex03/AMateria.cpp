#include "AMateria.hpp"


AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria param constructor" << std::endl;
    this->type = type;
}

AMateria::AMateria(void)
{
    std::cout << "AMateria constructor default" << std::endl;
    this->type = "AMateria"; 
    return ;
}
AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
    return ;
}
AMateria::AMateria(AMateria const & copy)
{
    std::cout << "AMateria constructor copy called" << std::endl;
    *this = copy;
    return ;
}
AMateria & AMateria::operator=(AMateria const & target)
{
    std::cout << "Ice constructor overload operator '=' called (TO CHANGE)" << std::endl;
    this->type = target.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    //std::cout << "Gettype" << std::endl;
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria does something to " << target.getName() << std::endl;
}
