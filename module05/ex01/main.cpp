#include "Form.hpp"
#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat b1("b1", 1);
        Bureaucrat b2("b2", 150);
        Form f1("f1", 1, 1);
        Form f2("f2", 1, 1);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        b1.signForm(f1);
        b2.signForm(f2);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}