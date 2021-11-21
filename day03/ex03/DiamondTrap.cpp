#include "DiamondTrap.hpp"

void DiamondTrap::attack(std::string const & target)
{
    this->ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = name;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & to_copy) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = to_copy;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap constructor called with param with name = " << name << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if(this->hit_points < 0)
		this->hit_points = 0;
    std::cout <<  this->name << " se fait attaquer ! Il subit " << amount << " points de dégâts, le laissant à " << this->hit_points << " points de vie."<< std::endl;
	if(this->hit_points == 0)
		std::cout << this->name << " est cassé." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
    std::cout << this->name << " se fait réparer de " << amount << " HP et il possède maintenant " << this->hit_points << " points de vie." << std::endl;
	if(this->hit_points < 0)
		std::cout << this->name << " n'est pas assez réparé pour être en état de fonctionnement." << std::endl;
	else
		std::cout << this->name << " est en pleine forme !" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & trap)
{
	std::cout << "DiamondTrap surcharge d'opérateur = appelé" << std::endl;
	this->hit_points = trap.hit_points;
	this->energy_points = trap.energy_points;
	this->attack_damage = trap.attack_damage;
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name = " << this->name << " and ClapTrap name = " << this->ClapTrap::name << std::endl;
	return ;
}
void DiamondTrap::printtrap(void)
{
	std::cout << "DiamondTrap name = " << this->name << std::endl;
	std::cout << "DiamondTrap attack damage = " << this->attack_damage << std::endl;
	std::cout << "DiamondTrap hit point = " << this->hit_points << std::endl;
	std::cout << "DiamondTrap energy points = " << this->energy_points << std::endl;
}
