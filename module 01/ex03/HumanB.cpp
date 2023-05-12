#include    "HumanA.hpp"

void    HumanB::attack() {
    std::cout << this->name << "attacks with their" << this->_weapon.getType() << std::endl;
}
