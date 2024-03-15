#include "Fixed.hpp"

#include "Fixed.hpp"


Fixed::Fixed() : m_number(0){
}

Fixed::Fixed(const int nb){
    m_number = nb << 8;
}

Fixed::Fixed(const float nb){
    m_number  = nb * (1 << 8);
}

Fixed::~Fixed(){
}


Fixed::Fixed(const Fixed& Fix){
    m_number = Fix.getRawBits();
}

int Fixed::getRawBits(void) const {
    return (m_number >> 8);
}

void Fixed::setRawBits(int const raw){
    m_number = raw;
}

float Fixed::toFloat( void ) const{
    return ((float)( m_number / (i << 8)));
}

int Fixed::toInt( void ) const{
    return (m_number >> 8);
}

Fixed Fixed::operator=(const Fixed& fix){

    Fixed newFixed;

    newFixed.setRawBits(fix.getRawBits());
    return (newFixed);
}