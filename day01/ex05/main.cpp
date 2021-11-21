#include "Karen.hpp"

int main()
{
	Karen annoying;

	std::cout << "Stage 1:" << std::endl;
	annoying.complain("DEBUG");	
	std::cout << "Stage 2:" << std::endl;
	annoying.complain("INFO");
	std::cout << "Stage 3:" << std::endl;
	annoying.complain("WARNING");
	std::cout << "Stage 4:" << std::endl;
	annoying.complain("ERROR");
}