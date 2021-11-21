#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : nbr_materia(0)
{
    for(int i = 0; i < 4; i++)
    {
       tab[i] = NULL;
    }
    std::cout << "MateriaSource constructor default" << std::endl;
    return ;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
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
    this->nbr_materia = copy.nbr_materia;
    std::cout << "MateriaSource constructor copy called (TO CHANGE)" << std::endl;
    return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & target)
{
    std::cout << "MateriaSource constructor overload operator '=' called (TO CHANGE)" << std::endl;
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
    this->nbr_materia = target.nbr_materia;
    return *this;
}

void MateriaSource::learnMateria(AMateria* to_copy)
{
    if(nbr_materia == 4)
        return ;
    tab[nbr_materia] = to_copy;
    nbr_materia++;
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if(nbr_materia == 0)
        return (0);
    for(int i = 0; i < nbr_materia; i++)
        if(tab[i]->getType() == type)
            return (tab[i]->clone());
    return (0);
}