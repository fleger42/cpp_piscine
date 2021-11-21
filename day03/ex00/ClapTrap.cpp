#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : hit_points(0), energy_points(0), attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & to_copy)
{
	*this = to_copy;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hit_points(10), energy_points(10), name(name), attack_damage(0)
{
    std::cout << "Constructor called with param with name = " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "ClapTrap " << this->name << " se fait attaquer ! Il subit " << amount << " points de dégâts, le laissant à " << this->hit_points << " points de vie."<< std::endl;
	if(this->hit_points == 0)
		std::cout << "ClapTrap " << this->name << " est cassé." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
    std::cout << "ClapTrap " << this->name << " se fait réparer de " << amount << " HP et il possède maintenant " << this->hit_points << " points de vie." << std::endl;
	if(this->hit_points < 0)
		std::cout << "ClapTrap " << this->name << " n'est pas assez réparé pour être en état de fonctionnement." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " est en pleine forme !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & trap)
{
	std::cout << "Surcharge d'opérateur = appelé" << std::endl;
	this->hit_points = trap.hit_points;
	this->energy_points = trap.energy_points;
	this->attack_damage = trap.attack_damage;
	return *this;
}

void ClapTrap::printtrap(void)
{
	std::cout << "name = " << this->name << std::endl;
	std::cout << "attack damage = " << this->attack_damage << std::endl;
	std::cout << "hit point = " << this->hit_points << std::endl;
	std::cout << "energy points = " << this->energy_points << std::endl;

}

/*void ClapTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand_seed_id;
	int attack_damage;
	std::string chosen_attack;
	std::string attack_tab[5] = {"Trempette", "Coup de poing", "Coup de couteau", "-HEADCRUSHER-", "*OBLIVION*"};
	int	 attack_tab_value[5] = {0, 15, 30, 77, 9999};

	if(this->energy_points < 25)
		std::cout << "Not enough energy" << std::endl;
	
	rand_seed_id = rand() % 5;
	chosen_attack = attack_tab[rand_seed_id];
	attack_damage = attack_tab_value[rand_seed_id];
	std::cout << "ClapTrap " << this->name << " utilise " << chosen_attack << " contre " << target << " causant " << attack_damage << " points de dégâts !" << std::endl;
}*/