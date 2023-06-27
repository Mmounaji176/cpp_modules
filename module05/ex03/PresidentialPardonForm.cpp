#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target):AForm("PresidentialPardonForm", 25, 5) ,target(_target)
{
     std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    *this = copy;
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm&   PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) 
{
    if (this == &copy)
        return *this;
    target = copy.target;
    std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else
        std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}