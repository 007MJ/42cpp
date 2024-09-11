#include "Fixed.hpp"
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : m_number(0){
    std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const int nb){
    std::cout << "Int constructor called"<< std::endl;
    m_number = nb << m_saveInt;
}

Fixed::Fixed(const float nb){
    std::cout << "Float constructor called"<< std::endl;
    m_number  =  int((roundf(nb * (1 << m_saveInt))));
}

Fixed::~Fixed(){
    std::cout << "Destructor called"<< std::endl;
}


Fixed::Fixed(const Fixed& Fix){
    std::cout << "Copy constructor called"<< std::endl;
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

float Fixed::toFloat( void ) const{
    return ((float) m_number / (float)(1 << m_saveInt));
}

int Fixed::toInt( void ) const{
    return (m_number >> m_saveInt);
}

Fixed&  Fixed::operator=(const Fixed& fix){
    std::cout << "Copy assignment operator called" << std::endl;
    this->m_number = fix.getRawBits();
    return (*this);
}


std::ostream & operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}