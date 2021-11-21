#include "HumanB.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon &weapon);
		~HumanA(void);
		void attack();
	private:
		Weapon & weapon;
		std::string name;
};