#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Param constructor with name " << this->name << std::endl;
	return;
}

Zombie::Zombie(void)
{
	std::cout << "Default constructor " << this->name << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destruct " << this->name << std::endl;
	return;
}

void Zombie::setname(std::string name)
{
	this->name = name;
}

void Zombie::annouce(void)
{
	std::cout << "<" << this->name << ">" <<" BraiiiiiiinnnzzzZ..." << std::endl;
}