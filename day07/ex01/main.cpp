#include "iter.hpp"
void ft_putchar(char & c)
{
	std::cout << c;
}

void ft_putnbr(float & nbr)
{
	std::cout << nbr << std::endl;
}

int main()
{
	char phrase[] = "Salut";
	float tab[] = {1.1f, 2.1f, 3.1f, 4.1f, 5.1f};
   	iter(phrase, 5, &ft_putchar);
	std::cout << std::endl;

	iter(tab, 5, &ft_putnbr);
	std::cout << "INCREMENT with template function incre: " << std::endl;
	iter(tab, 5, &incre);
	iter(tab, 5, &ft_putnbr);
    
}