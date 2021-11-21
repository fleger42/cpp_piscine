#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->nbr_user = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::ft_add()
{
	if(nbr_user < 8)
	{
		this->tab[this->nbr_user].ft_add();
		nbr_user++;
	}
	else
		std::cout << "Sorry, you can only have 8 user simultaneously" << std::endl;
	return ;
}

void	PhoneBook::ft_search(void)
{
	std::string str;
	int index;


	std::cout << "|";
	std::cout << std::right << std::setw(11) << "index|";
	std::cout << std::right << std::setw(11) << "first name|";
	std::cout << std::right << std::setw(11) << "last name|";
	std::cout << std::right << std::setw(11) << "nickname|" << std::endl;
	for(int i = 0; i < nbr_user; i++)
		tab[i].ft_print_contact(i);
	std::cout << "Enter the index of a user to see his info" << std::endl;
	getline(std::cin, str);
	index = atoi(&str[0]);
	if(index <= 0 && str[0] != '0')
		std::cout << "Only numerical character that are superior than 0 are accepted" << std::endl;
	else if(index >= nbr_user)
		std::cout << "This user doesnt exist" << std::endl;
	else
		tab[index].ft_print_contact_info();
}