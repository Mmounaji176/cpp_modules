# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
        PresidentialPardonForm&    operator=(const PresidentialPardonForm &src);

        std::string getTarget() const;
        void        execute(const Bureaucrat &executor) const;
};           