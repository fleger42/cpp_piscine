#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor default" << std::endl;
	type = "Dog";
	return ;
}

Dog::Dog(Dog const & to_copy) : Animal(), type("Dog")
{
	std::cout << "Dog constructor copy called" << std::endl;
	*this = to_copy;
	return ;
}

Dog & Dog::operator=(Dog const & dog)
{
	std::cout << "Dog constructor overload operator '=' called" << std::endl;
	(void)dog;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "*angry Dog sound*" << std::endl;
	return ;
}

std::string Dog::getType(void) const
{
	return (type);
}
