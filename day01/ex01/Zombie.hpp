#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void annouce(void);
		void setname(std::string name);
	private:
		std::string name;
};

Zombie  *zombieHorde(int N, std::string name);
