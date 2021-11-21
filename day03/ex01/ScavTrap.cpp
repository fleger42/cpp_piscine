#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
    std::cout << "Scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & to_copy) : ClapTrap()
{
	*this = to_copy;
    std::cout << "Scavtrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->name = name;
    std::cout << "Scavtrap constructor called with param with name = " << name << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & trap)
{
	std::cout << "ScavTrap surcharge d'opérateur = appelé" << std::endl;
	this->hit_points = trap.hit_points;
	this->energy_points = trap.energy_points;
	this->attack_damage = trap.attack_damage;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void ScavTrap::printtrap(void)
{
	std::cout << "ScavTrap name = " << this->name << std::endl;
	std::cout << "ScavTrap attack damage = " << this->attack_damage << std::endl;
	std::cout << "ScavTrap hit point = " << this->hit_points << std::endl;
	std::cout << "ScavTrap energy points = " << this->energy_points << std::endl;

}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->name << " attaque " << target << " à distance, causant " << this->attack_damage << " points de dégâts !" << std::endl;
	return ;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap has entered gate keeper mode" << std::endl;
}
