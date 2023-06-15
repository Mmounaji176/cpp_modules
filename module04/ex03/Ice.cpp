#include "Ice.hpp"

Ice::Ice() {
    std::cout << "Ice default constructor called" << std::endl;
}
 
Ice::Ice(std::string const & type): AMateria(type){
    std::cout << "Ice object created" << std::endl;
}

Ice::Ice(const Ice &obj) {
    *this = obj;
    std::cout << "Ice copy constructor calles" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice's destructor called " << std::endl;
}

Ice    &Ice::operator=(const Ice &obj) {
    std::cout << "Ice assignation operator called" << std::endl;
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

void        Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

Ice*   Ice::clone() const {
    return (Ice*)this;
}

