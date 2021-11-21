#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attack with his weapon " << this->weapon->getType() << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}