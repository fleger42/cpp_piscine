#ifndef CLAP_TRAP
#define CLAP_TRAP
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & to_copy);
		ClapTrap & operator=(ClapTrap const & trap);
		ClapTrap(std::string name);
		~ClapTrap(void);
		void printtrap(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
};
#endif