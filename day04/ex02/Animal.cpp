#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor default" << std::endl;
	type = "Animal";
	return ;
}

Animal::Animal(Animal const & to_copy)
{
	std::cout << "Animal constructor copy called" << std::endl;
	*this = to_copy;
	return ;
}

Animal & Animal::operator=(Animal const & animal)
{
	(void)animal;
	std::cout << "Animal constructor overload operator '=' called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void Animal::makeSound(void) const
{
	std::cout << "*Scary animal sound*" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (type);
}
