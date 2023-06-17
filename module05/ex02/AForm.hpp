#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;
class AForm
{
private:
    std::string const	name;
    bool				isSigned;
    const int			gradeToSign;
    const int			gradeToExecute;
public:
    AForm();
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(const AForm &copy);
    ~AForm();
    AForm &operator=(const AForm &copy);

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;
    void        beSigned(const Bureaucrat &bureaucrat);
    virtual void        execute(const Bureaucrat &executor) const = 0;
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream&   operator<<(std::ostream &out, const AForm &Aform);

#endif