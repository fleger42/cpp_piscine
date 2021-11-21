#include "Bureaucrat.hpp"

int main (void)
{
    std::cout << "--Test all fine with Charli--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli(100, "Charli");
        std::cout << charli << std::endl;
        std::cout << "Lets decrement !" << std::endl;
        charli.decrement();
        std::cout << charli << std::endl;
        std::cout << "Lets increment !" << std::endl;
        charli.increment();
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test too big with Freddy--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli(1, "Freddy");
        std::cout << charli << std::endl;
        std::cout << "Lets increment !" << std::endl;
        charli.increment();
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test too low with Franky--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli(150, "Franky");
        std::cout << charli << std::endl;
        std::cout << "Lets decrement !" << std::endl;
        charli.decrement();
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test too big at creation with Anatoli--" << std::endl << std::endl;
    try
    {
        Bureaucrat charli(151, "Anatoli");
        std::cout << charli << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}