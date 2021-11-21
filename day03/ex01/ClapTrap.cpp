#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : hit_points(0), energy_points(0), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & to_copy)
{
	*this = to_copy;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy_points(10), name(name), attack_damage(0)
{
    std::cout << "ClapTrap constructor called with param with name = " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " attaque " << target << " à distance, causant " << this->attack_damage << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if(this->hit_points < 0)
		this->hit_points = 0;
    std::cout << this->name << " se fait attaquer ! Il subit " << amount << " points de dégâts, le laissant à " << this->hit_points << " points de vie."<< std::endl;
	if(this->hit_points == 0)
		std::cout << this->name << " est cassé." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
    std::cout << this->name << " se fait réparer de " << amount << " HP et il possède maintenant " << this->hit_points << " points de vie." << std::endl;
	if(this->hit_points < 0)
		std::cout << this->name << " n'est pas assez réparé pour être en état de fonctionnement." << std::endl;
	else
		std::cout << this->name << " est en pleine forme !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & trap)
{
	std::cout << "ClapTrap surcharge d'opérateur = appelé" << std::endl;
	this->hit_points = trap.hit_points;
	this->energy_points = trap.energy_points;
	this->attack_damage = trap.attack_damage;
	return *this;
}

void ClapTrap::printtrap(void)
{
	std::cout << "ClapTrap name = " << this->name << std::endl;
	std::cout << "ClapTrap attack damage = " << this->attack_damage << std::endl;
	std::cout << "ClapTrap hit point = " << this->hit_points << std::endl;
	std::cout << "ClapTrap energy points = " << this->energy_points << std::endl;

}
