#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string& stringREF = str;
	std::string *stringPTR = &str;

	std::cout << &str << std::endl << stringPTR << std::endl << &stringREF << std::endl;
	std::cout << *stringPTR << std::endl << stringREF << std::endl; 
}