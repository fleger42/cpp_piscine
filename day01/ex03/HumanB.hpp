#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weapon);
	private:
		Weapon *weapon;
		std::string name;
};