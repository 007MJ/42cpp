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


bool Fixed::operator!=(const Fixed& fix){

        if (fix.getRawBits() != this->getRawBits())
            return (true);
        else
            return (false);
}

bool Fixed::operator==(const Fixed& fix){

   if ((fix.getRawBits() != this->getRawBits()) == true)
        return (false);
    else 
        return (true);
}

bool Fixed::operator>(const Fixed& fix){

        if (fix.getRawBits() > this->getRawBits())
            return (true);
        else
            return (false);
}
bool Fixed::operator<(const Fixed& fix){

    if (fix.getRawBits() < this->getRawBits())
        return (true);
    else 
        return (false);
}

bool Fixed::operator>=(const Fixed& fix){
        if (fix.getRawBits() >= this->getRawBits())
            return (true);
        else
            return (false);
}


bool Fixed::operator<=(const Fixed& fix){

    if ((fix.getRawBits() >= this->getRawBits()) == true)
        return (false);
    else
        return (true);
}

Fixed Fixed::operator+(const Fixed& fix){
    Fixed fix3;

    fix3.setRawBits(fix.getRawBits() + this->getRawBits());
    return (fix3);
}

Fixed Fixed::operator-(const Fixed& fix){
    Fixed fix3;

    fix3.setRawBits(fix.getRawBits() - this->getRawBits());
    return (fix3);
}

Fixed Fixed::operator*(const Fixed& fix){
    Fixed fix3;

    fix3.setRawBits(fix.getRawBits() * this->getRawBits());
    return (fix3);
}

Fixed Fixed::operator/(const Fixed& fix){
    Fixed fix3;

    fix3.setRawBits(fix.getRawBits() / this->getRawBits());
    return (fix3);
}

Fixed& Fixed::operator++(){
    m_number++;
    return (*this);
}

Fixed& Fixed::operator--(){
    m_number--;
    return (*this);
}

Fixed Fixed::operator+=(const Fixed& fix){
    Fixed fix3;

    fix3.setRawBits(fix.getRawBits() + this->getRawBits());
    return (fix3);
}

Fixed Fixed::operator-=(const Fixed& fix){
    Fixed fix3;

    fix3.setRawBits(fix.getRawBits() - this->getRawBits());
    return (fix3);
}

int Fixed::min(int &nb, int &nb2){

    static int staticNb = 0;
    if ( nb < nb2)
        return (staticNb = nb, staticNb);
    else
        return (staticNb = nb2, staticNb);
}

int Fixed::min(int const &nb, int const &nb2){
    static int staticNb = 0;
    if ( nb < nb2)
        return (staticNb = nb, staticNb);
    else
        return (staticNb = nb2, staticNb);
}

int Fixed::max(int const &nb, int const &nb2){
    static int staticNb = 0;
    if ( nb > nb2)
        return (staticNb = nb, staticNb);
    else
        return (staticNb = nb2, staticNb);
}