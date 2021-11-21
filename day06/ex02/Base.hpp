#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>
class Base
{
    public:
        Base(void);
		Base(Base const & to_copy);
        virtual ~Base(void);
		Base * generate(void);
		Base & operator=(Base const & to_copy);
		void identify(Base * p);
		void identify( Base & p);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};
#endif