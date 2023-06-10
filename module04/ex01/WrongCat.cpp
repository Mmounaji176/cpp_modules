#include "WrongCat.hpp"

WrongCat::WrongCat() {
  this->type = "WrongCat";
  std::cout << "WrongCat object created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) {
  *this = obj;
  std::cout << "WrongCat object created" << std::endl;
}
WrongCat::~WrongCat() {
  std::cout << "WrongCat's destructor called " << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

void WrongCat::makeSound() const { std::cout << "WrongCat sound" << std::endl; }