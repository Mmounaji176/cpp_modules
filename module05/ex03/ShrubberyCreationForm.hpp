#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
   std::string target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ShrubberyCreationForm&    operator=(const ShrubberyCreationForm &src);
    ShrubberyCreationForm(std::string _target);
    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

#endif