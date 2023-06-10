#include "Amateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(std::string const & type): _type(type){
    std::cout << "AMateria object created" << std::endl;
}

AMateria::AMateria(const AMateria &obj) {
    *this = obj;
    std::cout << "AMateria copy constructor calles" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria's destructor called " << std::endl;
}

AMateria    &AMateria::operator=(const AMateria &obj) {
    std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}

std::string const & AMateria::getType() const {
    return this->_type;
}

void        AMateria::use(ICharacter& target) {
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

AMateria*   AMateria::clone() const {
    return new AMateria(*this);
}