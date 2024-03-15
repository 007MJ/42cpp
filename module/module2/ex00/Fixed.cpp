#include "Fixed.hpp"


Fixed::Fixed() : m_number(0){
}

Fixed::~Fixed(){

}


Fixed::Fixed(const Fixed& Fix){
    m_number = Fix.getRawBits();
}

int Fixed::getRawBits(void) const {
    return (m_number);
}

void Fixed::setRawBits(int const raw){
    m_number = raw;
}

Fixed Fixed::operator=(const Fixed& fix){

    Fixed newFixed;

    newFixed.setRawBits(fix.getRawBits());
    return (newFixed);
}