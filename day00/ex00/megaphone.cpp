#include <iostream>
#include <string>

int		ft_isalpha(char c)
{
	if(c >= 97 && c <= 122)
		return (1);
	return (0);
}
char	*ft_to_up(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(ft_isalpha(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}

int main(int ac, char *av[])
{
	int i;

	i = 0;
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(++i < ac)
    	std::cout << ft_to_up(av[i]);
	std::cout << std::endl;
    return (0);
}
