#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & to_copy)
{
	*this = to_copy;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->name = name;
    std::cout << "FragTrap constructor called with param with name = " << name << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & trap)
{
	std::cout << "FragTrap surcharge d'opérateur = appelé" << std::endl;
	this->hit_points = trap.hit_points;
	this->energy_points = trap.energy_points;
	this->attack_damage = trap.attack_damage;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void FragTrap::printtrap(void)
{
	std::cout << "FragTrap name = " << this->name << std::endl;
	std::cout << "FragTrap attack damage = " << this->attack_damage << std::endl;
	std::cout << "FragTrap hit point = " << this->hit_points << std::endl;
	std::cout << "FragTrap energy points = " << this->energy_points << std::endl;

}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->name << " attaque " << target << " à distance, causant " << this->attack_damage << " points de dégâts !" << std::endl;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": Hey guys, give me a high five !" << std::endl;
}