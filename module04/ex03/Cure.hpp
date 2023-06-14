#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
private:
    std::string _type;
public:
    Cure();
    Cure(std::string const & type);
    Cure(Cure const & src);
    Cure& operator=(Cure const & rhs);
    virtual ~Cure();
    virtual Cure*   clone() const;
    virtual void        use(ICharacter& target);
};

#endif