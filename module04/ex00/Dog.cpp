#include "Dog.hpp"

Dog::Dog(): type("Dog"){
    std::cout << "Dog object created" << std::endl;
}

Dog::Dog(const Dog &obj) {
    *this = obj;
    std::cout << "Dog object created" << std::endl;
}
Dog::~Dog() {
    std::cout << "Dog's destructor called " << std::endl;
}

Dog &Dog::operator=(const Dog &obj) {
    if (this != &obj)
        this->type = obj.type;
    return *this;
}