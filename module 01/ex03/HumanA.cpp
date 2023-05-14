#include    "HumanA.hpp"

void    HumanA::attack() {
    if (this->_weapon.getType() == ""){
        std::cout << this->name << "has no weapon " << std::endl;
    }
    else {
        std::cout << this->name << "attacks with their" << this->_weapon.getType() << std::endl;
    }
}

HumanA::HumanA( std::string _name, Weapon& weapon ) : name(_name), _weapon(weapon) {
}

HumanA::~HumanA()
{
}