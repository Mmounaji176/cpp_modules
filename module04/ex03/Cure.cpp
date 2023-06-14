#include "Cure.hpp"

Cure::Cure() {
    std::cout << "Cure default constructor called" << std::endl;
}
 
Cure::Cure(std::string const & type): _type(type) {
    std::cout << "Cure object created" << std::endl;
}

Cure::Cure(const Cure &obj) {
    *this = obj;
    std::cout << "Cure copy constructor calles" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure's destructor called " << std::endl;
}

Cure    &Cure::operator=(const Cure &obj) {
    std::cout << "Cure assignation operator called" << std::endl;
    if (this != &obj)
        this->_type = obj._type;
    return *this;
}


void        Cure::use(ICharacter& target) {
    std::cout <<"* heals " << target.getName() << "’s wounds *"<< std::endl;
}

Cure*   Cure::clone() const {
    return (Cure*)this;
}

