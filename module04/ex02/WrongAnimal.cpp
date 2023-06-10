#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wronganimal") {
  std::cout << "WrongAnimal object created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
  *this = obj;
  std::cout << "WrongAnimal object created" << std::endl;
}
WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal's destructor called " << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
  if (this != &obj)
    this->type = obj.type;
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "a sound from wronganimal class" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }