#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : m_number(0){
    std::cout << "Default constructor called" << std::endl;
}


Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed& Fix){
    std::cout << "Copy constructor called" << std::endl;
    m_number = Fix.getRawBits();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (m_number);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    m_number = raw;
}

Fixed &Fixed::operator=(const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;

    this->setRawBits(fix.getRawBits());
    return (*this);
}