#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & src);
    RobotomyRequestForm&    operator=(const RobotomyRequestForm &src);
    RobotomyRequestForm(std::string _target);
    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

#endif