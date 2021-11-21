#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <iomanip>
#include <string.h>
#include <iostream>
#include <vector>
#include <istream>
#include "Contact.hpp"

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void ft_print_contact(int index);
		void ft_add(void);
		void ft_print_contact_info(void);
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
#endif