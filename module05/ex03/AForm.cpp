#include "AForm.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::~AForm() {
    std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm &copy) : name(copy.name), isSigned(copy.isSigned), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    std::cout << "AForm constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm&   AForm::operator=(const AForm &copy) {
    if (this == &copy)
        return *this;
    std::cout << "AForm assignation operator called" << std::endl;
    this->isSigned = copy.isSigned;
    return *this;
}

std::ostream&    operator<<(std::ostream &out, const AForm &form) {
    out << "AForm name: " << form.getName() << std::endl;
    out << "AForm signed: " << form.getSigned() << std::endl;
    out << "AForm grade to sign: " << form.getGradeToSign() << std::endl;
    out << "AForm grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}

const char *AForm::GradeTooHighException::what() const throw() {
  return ("You overrated the grade, which is limited in the range [1, 150]");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("You underrated the grade, which is limited in the range [1, 150]");
}

const char *AForm::FormNotSignedException::what() const throw() {
  return ("The form is not signed");
}

bool AForm::getSigned() const {
    return this->isSigned;
}

int AForm::getGradeToSign() const{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const{
    return this->gradeToExecute;
}

std::string AForm::getName() const {
    return this->name;
}

void    AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    this->isSigned = true;
}