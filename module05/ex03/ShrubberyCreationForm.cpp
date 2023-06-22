#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): target(_target),  AForm("ShrubberyCreationForm", 145, 137) 
{
     std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : target("default"), AForm("ShrubberyCreationForm", 145, 137) 
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::getTarget() const
{
    return this->target;
}
ShrubberyCreationForm::~ShrubberyCreationForm() 
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : target(copy.target), AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) 
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm&   ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) 
{
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else
    {
        std::ofstream file;
        file.open(this->target + "_shrubbery");
        file << "      /\\\n";
        file << "     /\\*\\\n";
        file << "    /\\O\\*\\\n";
        file << "   /*/\\/\\/\\\n";
        file << "  /\\O\\/\\*\\/\\\n";
        file << " /\\*\\/\\*\\/\\/\\\n";
        file << "/\\O\\/\\/*/\\/O/\\\n";
        file << "      ||\n";
        file << "      ||\n";
        file << "      ||\n";
        file << "    \\====/\n";
        file << "     \\__/  hjw\n";
        file.close();
    }
}