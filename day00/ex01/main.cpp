#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int ac, char *av[])
{
	std::string str;
	PhoneBook phonebook;

	while(42)
	{
		std::cout << "Enter one of the follow commands:" << std::endl << "SEARCH: Search a user" << std::endl << "ADD: Add a new user" << std::endl << "EXIT: Exit the program" << std::endl;
		getline(std::cin, str);
		if(str.compare("ADD") == 0)
			phonebook.ft_add();
		else if(str.compare("SEARCH") == 0)
			phonebook.ft_search();
		else if(str.compare("EXIT") == 0)
			exit(0);
	}
	return (0);
}