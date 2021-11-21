#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        virtual ~Ice(void);
        Ice(Ice const & copy);
        Ice & operator=(Ice const & target);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};
#endif