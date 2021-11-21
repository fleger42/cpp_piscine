#ifndef SCAV_TRAP
#define SCAV_TRAP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & to_copy);
		ScavTrap & operator=(ScavTrap const & trap);
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
		void printtrap(void);
		void attack(std::string const & target);
		void guardGate();
	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
};
#endif