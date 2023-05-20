#include "Animal.hpp"

class Cat: public Animal{
    Cat();
    ~Cat();
    Cat(const Cat &obj);
    Cat& operator=(const Cat &obj);
    void    makeSound() const;
};