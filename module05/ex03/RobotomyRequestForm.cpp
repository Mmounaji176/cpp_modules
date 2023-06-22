#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): target(_target),  AForm("RobotomyRequestForm", 72, 45) 
{
     std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : target("default"), AForm("RobotomyRequestForm", 72, 45) 
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : target(copy.target), AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) 
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm&   RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) 
{
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

RobotomyRequestForm::execut