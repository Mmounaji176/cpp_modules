#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat&    operator=(const Bureaucrat &src);

        std::string   getName() const;
        int           getGrade() const;

        void          incrementGrade();
        void          decrementGrade();
        void          signForm(AForm &form);
        void          executeForm(AForm const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & b);

#endif