#include "Base.hpp"

Base::Base(void)
{

}

Base::Base(Base const & to_copy)
{
	(void)to_copy;
}

Base::~Base(void)
{

}

Base & Base::operator=(Base const & to_copy)
{
	(void)to_copy;
	return(*this);
}

void Base::identify(Base * p)
{
	A *a_var = dynamic_cast<A*>(p);
	B *b_var = dynamic_cast<B*>(p);
	C *c_var = dynamic_cast<C*>(p);

	if(a_var)
		std::cout << "A" << std::endl;
	else if (b_var)
		std::cout << "B" << std::endl;
	else if (c_var)
		std::cout << "C" << std::endl;
}

void Base::identify( Base & p)
{
	try
	{
		A & a_var = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a_var;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B & b_var = dynamic_cast<B&>(p);	
		std::cout << "B" << std::endl;
		(void)b_var;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C & c_var = dynamic_cast<C&>(p);	
		std::cout << "C" << std::endl;
		(void)c_var;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	
}

Base * Base::generate(void)
{

	Base *ret = NULL;

	srand(time(NULL));

	int rand_nbr = rand() % 3 + 1;
	if(rand_nbr == 1)
	{
		std::cout << "Generate A" << std::endl;
		ret = new A();
	}
	if(rand_nbr == 2)
	{
		std::cout << "Generate B" << std::endl;
		ret = new B();
	}
	if(rand_nbr == 3)
	{
		std::cout << "Generate C" << std::endl;
		ret = new C();
	}
	return (ret);
}