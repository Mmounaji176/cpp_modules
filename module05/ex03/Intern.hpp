#ifndef INTERN_HPP

# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern& operator=(const Intern &copy);

        AForm* makeForm(std::string formName, std::string target);
};

#endif