#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor default" << std::endl;
	type = "Dog";
	brain = new Brain();
	return ;
}

Dog::Dog(Dog const & to_copy) : Animal(),  type("Dog")
{
	std::cout << "Dog constructor copy called" << std::endl;
	brain = new Brain(*to_copy.brain);
	return ;
}

Dog & Dog::operator=(Dog const & Dog)
{
	std::cout << "Dog constructor overload operator '=' called" << std::endl;
	brain = new Brain(*Dog.brain);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
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
