#include "Fixed.hpp"
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : m_number(0){
}

Fixed::Fixed(const int nb){
    m_number = nb << m_saveInt;
}

Fixed::Fixed(const float nb){
    m_number  =  int((roundf(nb * (1 << m_saveInt))));
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

float Fixed::toFloat( void ) const{
    return ((float) m_number / (float)(1 << m_saveInt));
}

int Fixed::toInt( void ) const{
    return (m_number >> m_saveInt);
}

Fixed&  Fixed::operator=(const Fixed& fix){

    this->m_number = fix.getRawBits();
    return (*this);
}


std::ostream & operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}