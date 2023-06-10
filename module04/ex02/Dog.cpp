#include "Dog.hpp"

Dog::Dog(): Animal("dog") {
  std::cout << "Dog object created" << std::endl;
}

Dog::Dog(const Dog &obj) {
  *this = obj;
  std::cout << "Dog object created" << std::endl;
}
Dog::~Dog() { 
  delete  this->brain;
  std::cout << "Dog's destructor called " << std::endl;
}

Dog &Dog::operator=(const Dog &obj) {
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

void Dog::makeSound() const { std::cout << "Dog sound" << std::endl; }