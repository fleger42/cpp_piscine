#include "Character.hpp"

Character::Character(std::string const & name) : name(name), nbr_materia(0)
{
    std::cout << "Character constructor param called" << std::endl;
    for(int i = 0; i < 4; i++)
        tab[i] = NULL;
    return ;
}

Character::Character(void) : nbr_materia(0)
{
    std::cout << "Character constructor default" << std::endl;
    for(int i = 0; i < 4; i++)
        tab[i] = NULL;
    return ;
}

Character::~Character(void)
{
    std::cout << "Character destructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(this->tab[i] != NULL)
            delete this->tab[i];
    }
    return ;
}

Character::Character(Character const & copy) : nbr_materia(0)
{
    std::cout << "Character constructor copy called (TO CHANGE)" << std::endl;
   for(int i = 0; i < 4; i++)
    {
        if(this->tab[i] != NULL)
            delete this->tab[i];
    }
    for(int i = 0; i < 4; i++)
    {
        if(copy.tab[i] != NULL)
            this->tab[i] = copy.tab[i]->clone();
        else
            this->tab[i] = NULL;
    }
    this->name = copy.name;
    this->nbr_materia = copy.nbr_materia;
    return ;
}

Character & Character::operator=(Character const & target)
{
    std::cout << "Character constructor overload operator '=' called (TO CHANGE)" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(this->tab[i] != NULL)
            delete this->tab[i];
    }
    for(int i = 0; i < 4; i++)
    {
        if(target.tab[i] != NULL)
            this->tab[i] = target.tab[i]->clone();
        else
            this->tab[i] = NULL;
    }
    this->name = target.name;
    this->nbr_materia = target.nbr_materia;
    return *this;
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if(!m || nbr_materia == 4)
        return ;
    tab[nbr_materia] = m;
    nbr_materia++;
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx <= 4)
        tab[idx] = NULL;
    nbr_materia--;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx <= 4 && tab[idx] != NULL)
    {
        tab[idx]->use(target);
    }
}