#ifndef PHONE_BOOK
#define PHONE_BOOK
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void ft_add();
		void ft_search();
	private:
		Contact tab[8];
		int nbr_user;
};
#endif