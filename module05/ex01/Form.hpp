#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;
class Form
{
private:
    std::string const	name;
    bool				isSigned;
    const int			gradeToSign;
    const int			gradeToExecute;
public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form &copy);
    ~Form();
    Form &operator=(const Form &copy);

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;
    void        beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};

std::ostream&   operator<<(std::ostream &out, const Form &form);

#endif