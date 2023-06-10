#include "Cat.hpp"

Cat::Cat(): Animal(cat) {
  try {
      this->brain = new Brain();    
  }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
  std::cout << "Cat object created" << std::endl;
}

Cat::Cat(const Cat &obj) {
  *this = obj;
  std::cout << "Cat object created" << std::endl;
}
Cat::~Cat() { 
  delete  this->_brain;
  std::cout << "Cat's destructor called " << std::endl; 
}

Cat &Cat::operator=(const Cat &obj) {
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

void Cat::makeSound() const { std::cout << "Cat sound" << std::endl; }