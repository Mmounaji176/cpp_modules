#include    "HumanA.hpp"

void    HumanA::attack() {
    std::cout << this->name << "attacks with their" << this->_weapon.getType() << std::endl;
}