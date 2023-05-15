#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    std::cout << "Constructor called" << std::endl;
    setType(str);
}

Weapon::~Weapon()
{
    std::cout << "Destructor has been called" << std::endl;
}

const std::string&  Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string str)
{
    this->type = str;
}