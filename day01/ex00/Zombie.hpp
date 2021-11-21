#include <iostream>
#include <unistd.h>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void annouce(void);
	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);