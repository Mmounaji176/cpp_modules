#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("messi"), grade(1) {
  std::cout << "default constructor has been called" << std::endl;
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
  if (this != &src) {
    grade = src.grade;
  }
  std::cout << "Assignation operator called" << std::endl;
  return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
  *this = src;
  std::cout << "copy constructor has been called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string _name, int grade) : name(_name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  this->grade = grade;
  std::cout << "Bureaucrat " << this->name << "has been created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat " << this->name << " has been destroyed"
            << std::endl;
}

void Bureaucrat::incrementGrade() {
  if (this->grade <= 1)
    throw Bureaucrat::GradeTooHighException();
  this->grade--;
}

void Bureaucrat::decrementGrade() {
  if (this->grade >= 150)
    throw Bureaucrat::GradeTooLowException();
  this->grade++;
}
int Bureaucrat::getGrade() const { return this->grade; }

std::string Bureaucrat::getName() const { return this->name; }

std::ostream &operator<<(std::ostream &std, Bureaucrat const &b) {
  std << b.getName() << " bureacrat grade " << b.getGrade() <<" .";
  return std;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("the grade is too high, which is limited in the range [1, 150]");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("the grade is too low, which is limited in the range [1, 150]");
}

void  Bureaucrat::executeForm(AForm const & form) {
  if (form.getSigned() == false)
    std::cout << "Form " << form.getName() << " is not signed" << std::endl;
  else if (form.getGradeToExecute() < this->grade)
    std::cout << "Bureaucrat " << this->name << " cannot execute form " << form.getName() << " because his grade is too low" << std::endl;
  else {
    std::cout << "Bureaucrat " << this->name << " executes form " << form.getName() << std::endl;
    form.execute(*this);
  }
}

void  Bureaucrat::signForm(AForm &form) {
  if (form.getSigned())
    std::cout << "Form " << form.getName() << " is already signed" << std::endl;
  else if (form.getGradeToSign() < this->grade)
    std::cout << "Bureaucrat " << this->name << " cannot sign form " << form.getName() << " because his grade is too low" << std::endl;
  else {
    std::cout << "Bureaucrat " << this->name << " signs form " << form.getName() << std::endl;
    form.beSigned(*this);
  }
}