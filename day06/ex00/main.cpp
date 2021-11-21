#include "Converter.hpp"

int main(int ac, char *av[])
{
    if(ac != 2)
    {
        std::cout << "Error: Argument" << std::endl;
        return (1);
    }
    Converter test(av[1]);
    std::cout << test << std::endl;

   std::cout << "Other test :" << std::endl << std::endl;

    Converter test1("0.0");
    std::cout << test1 << std::endl << std::endl;
    Converter test2("1");
    std::cout << test2 << std::endl << std::endl;
    try
    {
        Converter test3("hey");
        std::cout << test3 << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error:" << e.what() << std::endl << std::endl;
    }
    Converter test4("-2147483648");
    std::cout << test4 << std::endl << std::endl;
    Converter test5("2147483647");
    std::cout << test5 << std::endl << std::endl;

    std::cout << "Weird but okay " << static_cast<float>(2147483647) << std::endl;
    return (0);
}