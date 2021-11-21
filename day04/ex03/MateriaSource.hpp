#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource;
class MateriaSource;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        virtual ~MateriaSource(void);
        MateriaSource(MateriaSource const & copy);
        MateriaSource & operator=(MateriaSource const & target);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
    private:
        AMateria *tab[4];
        int nbr_materia;
};
#endif