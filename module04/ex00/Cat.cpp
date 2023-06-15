#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
  std::cout << "Cat object created" << std::endl;
}

Cat::Cat(const Cat &obj) {
  *this = obj;
  std::cout << "Cat object created" << std::endl;
}
Cat::~Cat() { std::cout << "Cat's destructor called " << std::endl; }

Cat &Cat::operator=(const Cat &obj) {
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

void Cat::makeSound() const { std::cout << "Cat sound" << std::endl; }