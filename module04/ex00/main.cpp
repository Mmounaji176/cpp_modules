#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  // const Animal* meta = new Animal();
  const WrongAnimal *i = new WrongCat();
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  delete i;
  return 0;
}