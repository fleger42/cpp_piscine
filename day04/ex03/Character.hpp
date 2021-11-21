#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        virtual ~Character(void);
        Character(Character const & copy);
        Character(std::string const & name);
        Character & operator=(Character const & target);
        std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    private:
        AMateria *tab[4];
        std::string name;
        int nbr_materia;
};
#endif