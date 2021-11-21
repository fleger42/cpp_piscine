#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    Form easy;
    Form average("Easy", 100, 100);
    Form hard("Hard", 5, 5);

    Bureaucrat bad_worker(140, "bad_worker");
    Bureaucrat good_worker(1, "good_worker");
    Bureaucrat average_worker(100, "average_worker");

    std::cout << "--Test easy and grade is sufficient--" << std::endl << std::endl;
    try
    { 
        std::cout << easy << std::endl;
        easy.beSigned(good_worker);
        std::cout << "Signed state of easy is : " << easy.getState() << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test hard and grade is too low--" << std::endl << std::endl;
    try
    { 
        std::cout << hard << std::endl;
        hard.beSigned(bad_worker);
        std::cout << "Signed state of hard is : " << hard.getState() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "--Test average and grade is equal--" << std::endl << std::endl;
    try
    { 
        std::cout << average << std::endl;
        average.beSigned(average_worker);
        std::cout << "Signed state of average is : " << average.getState() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << "--Other test--" << std::endl << std::endl;
    Bureaucrat test(10, "Michel");
    Form possible("possible", 10, 10);
    Form impossible("impossible", 9, 9);
    
    test.signForm(possible);
    test.signForm(impossible);

}