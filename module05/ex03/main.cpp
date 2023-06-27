
#include   "Intern.hpp"
int main()
{
    Intern  someRandomIntern;
    AForm*  rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->getName();
    delete rrf;
}