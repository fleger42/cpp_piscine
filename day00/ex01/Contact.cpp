#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::ft_add(void)
{
	char str[256];

	std::cout << "Please insert your first_name" << std::endl;
	std::cin.getline(str, 256, '\n');
	this->first_name = str;
	std::cout << "Please insert your last_name" << std::endl;
	std::cin.getline(str, 256, '\n');
	this->last_name = str;
	std::cout << "Please insert your nickname" << std::endl;
	std::cin.getline(str, 256, '\n');
	this->nickname = str;
	std::cout << "Please insert your phone_number" << std::endl;
	std::cin.getline(str, 256, '\n');
	this->phone_number = str;
	std::cout << "Please insert your darkest_secret" << std::endl;
	std::cin.getline(str, 256, '\n');
	this->darkest_secret = str;
	std::cout << "User added successfully" << std::endl;
}

void	Contact::ft_print_contact(int index)
{
	char tmp[20];

	std::cout << std::right << std::setw(10) << index << "|";
	memset(tmp, 0, 20);
	this->first_name.copy(tmp, std::min<size_t>(9, (int)this->first_name.size()));
	if((int)this->first_name.size() > 9)
		tmp[9] = '.';
	std::cout << std::right << std::setw(10) << tmp << "|";
	memset(tmp, 0, 20);
	this->last_name.copy(tmp, std::min<size_t>(9, (int)this->last_name.size()));
	if((int)this->last_name.size() > 9)
		tmp[9] = '.';
	std::cout << std::right << std::setw(10) << tmp << "|";
	memset(tmp, 0, 20);
	this->nickname.copy(tmp, std::min<size_t>(9, (int)this->nickname.size()));
	if((int)this->nickname.size() > 9)
		tmp[9] = '.';
	std::cout << std::right << std::setw(10) << tmp << "|" << std::endl;
}

void Contact::ft_print_contact_info(void)
{
	std::cout << "First name:" << this->first_name << std::endl;
	std::cout << "Last name:" << this->last_name << std::endl;
	std::cout << "Nickname:" << this->nickname << std::endl;
	std::cout << "Phone number:" << this->phone_number << std::endl;
	std::cout << "Darkest secret:" << this->darkest_secret << std::endl;
}