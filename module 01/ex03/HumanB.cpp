#include    "HumanB.hpp"

void    HumanB::attack() {
    if (this->_weapon == NULL || this->_weapon->getType() == ""){
        std::cout << this->name << "has no weapon " << std::endl;
    }
    else {
        std::cout << this->name << "attacks with their" << this->_weapon->getType() << std::endl;
    }
}

HumanB::HumanB(std::string naame): name(naame), _weapon(NULL) {
}

HumanB::~HumanB() {

}
void    HumanB::setWeapon( Weapon& weapon ) {
    this->_weapon = &weapon;
}