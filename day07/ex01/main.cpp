#include "iter.hpp"
void ft_putchar(char & c)
{
	std::cout << c;
}

int main()
{
	char phrase[] = "Salut";
	float tab[] = {1.1f, 2.1f, 3.1f, 4.1f, 5.1f};
	int nbr = 5;
   	iter(phrase, nbr, &ft_putchar);

	std::cout << std::endl << tab[0] << " ";
	std::cout << tab[1] << " ";
	std::cout << tab[2] << " ";
	std::cout << tab[3] << " ";
	std::cout << tab[4] << std::endl;
	std::cout << "INCREMENT: " << std::endl;
	iter(tab, 5, &incre);
	std::cout << tab[0] << " ";
	std::cout << tab[1] << " ";
	std::cout << tab[2] << " ";
	std::cout << tab[3] << " ";
	std::cout << tab[4] << std::endl;
    
}