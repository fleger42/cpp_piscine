#include "whatever.hpp"

/*int main()
{
    int     a_i = 10;
    int		b_i = 9;
    float   a_f = 10.1f;
    float   b_f = 9.9f;

    std::cout << max(a_i,b_i) << std::endl;
	std::cout << min(a_i,b_i) << std::endl;
	std::cout << max(a_f,b_f) << std::endl;
	std::cout << min(a_f,b_f) << std::endl;

	std::cout << "a = " << a_i << " b = " << b_i << std::endl;
	std::cout << "swap !" << std::endl;
	swap(a_i,b_i);
	std::cout << "a = " << a_i << " b = " << b_i << std::endl;
}*/

int main(void) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
