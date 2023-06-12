#include "Form.hpp"

Form::Form() : name("default"), signed(false), gradeToSign(150), gradeToExecute(150) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form &copy) : name(copy.name), signed(copy.signed), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), signed(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::operator=(const Form &copy) {
    std::cout << "Form assignation operator called" << std::endl;
    this->signed = copy.signed;
    return *this;
}
std::ostream    Form::operator<<(std::ostream &out, const Form &form) {
    out << "Form name: " << form.getName() << std::endl;
    out << "Form signed: " << form.getSigned() << std::endl;
    out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("You overrated the grade, which is limited in the range [1, 150]");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("You underrated the grade, which is limited in the range [1, 150]");
}


bool Form::getSigned() const {
    return this->signed;
}

int Form::getGradeToSign() const{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const{
    return this->gradeToExecute;
}

int Form::getName() const {
    return this->name;
}

void    Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->signed = true;
}