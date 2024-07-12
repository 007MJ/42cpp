#include "Fixed.hpp"
#include <iostream>

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

bool Fixed::operator!=(const Fixed& fix){
    return (this->getRawBits() != fix.getRawBits());
}

bool Fixed::operator==(const Fixed& fix){
   return (this->getRawBits() == fix.getRawBits());
}

bool Fixed::operator>(const Fixed& fix){
    return (this->getRawBits() >  fix.getRawBits());
}
bool Fixed::operator<(const Fixed& fix){
     return (this->getRawBits() < fix.getRawBits() );
}

bool Fixed::operator>=(const Fixed& fix){
    return ( this->getRawBits() >=  fix.getRawBits());
}


bool Fixed::operator<=(const Fixed& fix){
    return ((this->getRawBits() <= fix.getRawBits()));
}

Fixed Fixed::operator+(const Fixed& fix) const{
    Fixed fix3;

    fix3.setRawBits(this->getRawBits() + fix.getRawBits());
    return (fix3);
}

Fixed Fixed::operator-(const Fixed& fix) const {
    Fixed fix3;

    fix3.setRawBits(this->getRawBits() - fix.getRawBits());
    return (fix3);
}

Fixed Fixed::operator*(const Fixed& fix) const{
    Fixed fix3;

    fix3.setRawBits((this->m_number * fix.getRawBits()) >> m_saveInt);
    return (fix3);
}

Fixed Fixed::operator/(const Fixed& fix) const {
    Fixed fix3;

    fix3.setRawBits((this->m_number << m_saveInt ) / fix.getRawBits());
    return (fix3);
}

Fixed &Fixed::operator++(){
    this->m_number++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed result(*this);

    this->m_number++;
    return (result);
}

Fixed &Fixed::operator--(){
    this->m_number--;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed result(*this);

    this->m_number--;
    return (result);
}

Fixed& Fixed::operator+=(const Fixed& fix){
    this->setRawBits(this->getRawBits() + fix.getRawBits());
    return (*this);
}

Fixed& Fixed::operator-=(const Fixed& fix){
    this->setRawBits(this->getRawBits() - fix.getRawBits());
    return (*this);
}

std::ostream & operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return (a);
    else 
        return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    else 
        return (b);
 }

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}