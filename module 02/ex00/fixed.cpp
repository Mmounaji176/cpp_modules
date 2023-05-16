#include "fixed.hpp"

Fixed::Fixed() {
    std::cout << "default constructor called" << std::endl;
    this->point = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "copy constructor called" << std::endl;
    this->setRawBits(fixed.getRawBits());
}

Fixed::~Fixed() {
    std::cout << "destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->point = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->point;
}

void Fixed::setRawBits(const int raw) {
    this->point = raw;
}