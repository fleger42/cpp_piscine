#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

int main(int ac, char **av)
{	
	int i;
	std::string container;
	std::string result;
	std::stringstream buffer;
	i = 0;

	if(ac != 4)
	{
		std::cout << "Error parsing" << std::endl;
		return (1);
	}
	if(av[1] == NULL || av[2] == NULL || av[3] == NULL || av[1][0] == '\0' || av[2][0] == '\0' || av[3][0] == '\0')
	{
		std::cout << "Error parsing" << std::endl;
		return (1);
	}
	std::ifstream input(av[1]);

	if(input.good() == 0)
		std::cout << "Error, file is not valid." << std::endl;
	std::string first(av[2]);
	std::string second(av[3]);
	buffer << input.rdbuf();
	container = buffer.str();

	std::ofstream output("FILENAME.replace");
	while(container[i])
	{
		if(container.compare(i, first.length(), first) == 0)
		{
			//std::cout << "Found:" << first << std::endl;
			output << second;
			i += first.length() - 1;
		}
		else
		{
			output << container[i];
		}
		
		i++;
	}
	return (0);
}