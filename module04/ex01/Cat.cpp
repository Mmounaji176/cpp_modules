#include "Cat.hpp"

Cat::Cat(){
  this->type = "cat";
  this->brain = new Brain();    
  std::cout << "Cat object created" << std::endl;
}

Cat::Cat(const Cat &obj) {
  std::cout << "Cat object created" << std::endl;
  *this = obj;
}
Cat::~Cat() { 
  delete  this->brain;
  std::cout << "Cat's destructor called " << std::endl; 
}

Cat &Cat::operator=(const Cat &obj) {
  if (this != &obj)
  {
    this->type = obj.type;
    delete this->brain;
    this->brain = new Brain(*obj.brain);
  }
  return *this;
}

void Cat::makeSound() const { std::cout << "Cat sound" << std::endl; }