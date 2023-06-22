#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target):  AForm("RobotomyRequestForm", 72, 45)  ,target(_target)
{
     std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) ,target("default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :  AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) ,target(copy.target)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm&   RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) 
{
    if (this == &copy)
        return *this;
    target = copy.target;
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if ( executor.getGrade() > this->getGradeToExecute() )
        throw AForm::GradeTooLowException();
    else if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else {
        static int  i;
        if ( i % 2 == 0 )
            std::cout <<  this->target << " has been robotomized!" << std::endl;
        else
            std::cout <<this->target << "Robotomy failed! "  << std::endl;
        i++;
    }
}