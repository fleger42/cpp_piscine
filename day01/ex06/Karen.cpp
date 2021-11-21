#include "Karen.hpp"

Karen::~Karen(void)
{
	return ;
}

Karen::Karen(void)
{
	return ;
}

int Karen::evaluate_level(std::string filter)
{
	if(filter.compare("DEBUG") == 0)
		return (0);
	if(filter.compare("INFO") == 0)
		return (1);
	if(filter.compare("WARNING") == 0)
		return (2);
	if(filter.compare("ERROR") == 0)
		return (3);
	return (-1);
}

void Karen::complain(std::string level, std::string filter)
{
	pf tab[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string tab_name[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen annoying;
	int filter_level;
	int i;

	i = 0;
	filter_level = evaluate_level(filter);
	switch(filter_level)
	{
		case 0 :
			break;
		case 1 :
			tab[0] = NULL;
			break;
		case 2 :
			tab[0] = NULL;
			tab[1] = NULL;
			break;
		case 3 :
			tab[0] = NULL;
			tab[1] = NULL;
			tab[2] = NULL;
			break;
		default :
			tab[0] = NULL;
			tab[1] = NULL;
			tab[2] = NULL;
			tab[3] = NULL;
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	while(i < 4)
	{
		if(tab_name[i].compare(level) == 0)
		{
			while(i < 4)
			{
				if(tab[i])
					(annoying.*tab[i])();
				i++;
			}

		}
		i++;
	}
	return ;
}

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough ! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}
