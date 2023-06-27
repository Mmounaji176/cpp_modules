#include "Intern.hpp"

Intern::Intern() 
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern() 
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &copy) 
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = copy;
}

Intern& Intern::operator=(const Intern &copy) 
{
    (void)copy;
    std::cout << "Intern assignation operator called" << std::endl;
    return *this;
}
AForm*   Intern::makeForm( std::string name, std::string target ) {

    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm*    forms[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    
    for ( int i(0); i < 3; i++ ) {
        if ( name == formNames[i] ) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return nullptr;
}
