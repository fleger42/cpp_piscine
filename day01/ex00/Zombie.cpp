#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{

	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destruct " << this->name << std::endl;
	return;
}

void Zombie::annouce(void)
{
	std::cout << "<" << this->name << ">" <<" BraiiiiiiinnnzzzZ..." << std::endl;
}