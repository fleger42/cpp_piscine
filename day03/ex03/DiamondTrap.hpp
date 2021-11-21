#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & to_copy);
		DiamondTrap & operator=(DiamondTrap const & trap);
		DiamondTrap(std::string name);
		virtual ~DiamondTrap(void);
		void printtrap(void);
		void attack(std::string const & target);
		void whoAmI();
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
};
#endif