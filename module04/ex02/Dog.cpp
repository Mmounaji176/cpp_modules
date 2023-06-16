#include "Dog.hpp"

Dog::Dog(){
  this->type = "dog";
  this->brain = new Brain();
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
  {
    this->type = obj.type;
    delete this->brain;
    this->brain = new Brain(*obj.brain);
  }  
  return *this;
}

void Dog::makeSound() const { std::cout << "Dog sound" << std::endl; }