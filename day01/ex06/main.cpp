#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen annoying;

	if(ac != 2)
	{
		std::cout << "Wrong number of arg" << std::endl;
		return (1);
	}
	annoying.complain("DEBUG", av[1]);
	return (0);
}