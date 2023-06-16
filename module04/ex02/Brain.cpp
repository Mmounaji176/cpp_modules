#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain has been created"<< std::endl;
}

Brain::~Brain(){
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain&  Brain::operator=(const Brain& src){
    std::cout << "Brain assignement operator called" << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}

Brain::Brain(const Brain& src){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}