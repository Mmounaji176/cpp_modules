#include "Animal.hpp"

Animal::Animal() : type("animal") {
  std::cout << "Animal object created" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
  std::cout << "Animal object created" << std::endl;
}

Animal::Animal(const Animal &obj) {
  *this = obj;
  std::cout << "Animal object created" << std::endl;
}
Animal::~Animal() { std::cout << "Animal's destructor called " << std::endl; }

Animal &Animal::operator=(const Animal &obj) {
  std::cout << "Animal assignation operator called" << std::endl;
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

void Animal::makeSound() const {
  std::cout << "a sound from animal class" << std::endl;
}

std::string Animal::getType() const { return this->type; }