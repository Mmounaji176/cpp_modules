#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
Brain brain;
    system("leaks ex01");
}
// #include <iostream>
// class ShallowCopy {
// public:
//     int* data;

//     ShallowCopy() {
//         data = new int;
//     }

//     ~ShallowCopy() {
//         delete data;
//     }

//     ShallowCopy(const ShallowCopy& other) {
//         data = other.data;  // Shallow copy of the pointer
//     }
// };

// int main()
// {
//     ShallowCopy source;
//     ShallowCopy dest;  // Shallow copy of the pointer
//     source = dest;
//     std::cout << *source.data << std::endl;
//     std::cout << *dest.data << std::endl;
//     *source.data = 5;
//         std::cout << *source.data << std::endl;
//     std::cout << *dest.data << std::endl;
//     return 0;
// }