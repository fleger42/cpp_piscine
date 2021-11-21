#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        virtual ~Cure(void);
        Cure(Cure const & copy);
        Cure & operator=(Cure const & target);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};
#endif