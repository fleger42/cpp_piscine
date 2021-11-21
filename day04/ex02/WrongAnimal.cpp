#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor default" << std::endl;
	type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & to_copy)
{
	std::cout << "WrongAnimal constructor copy called" << std::endl;
	*this = to_copy;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & wronganimal)
{
	(void)wronganimal;
	std::cout << "WrongAnimal constructor overload operator '=' called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*Scary Wronganimal sound*" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
