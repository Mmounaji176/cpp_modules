#include "Weapon.hpp"

Weapon::Weapon(std::string _type){
    if (_type == nullptr)
        return ;
}
const std::string& Weapon::getType()
{
    const std::string& ref = this->type;
    return ref;
}

void    Weapon::setType(std::string str){
    this->type = str;
}