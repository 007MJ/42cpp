#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    public:
        // construct 
        Fixed();
        Fixed(int number);
        Fixed(float number);
        ~Fixed();

        // methode 
        Fixed(const Fixed& Fix);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        // operator
        Fixed &operator=(const Fixed& fix);
        bool operator!=(const Fixed& fix);
        bool operator==(const Fixed& fix);
        bool operator>(const Fixed& fix);
        bool operator>=(const Fixed& fix);
        bool operator<(const Fixed& fix);
        bool operator<=(const Fixed& fix);
        Fixed operator+(const Fixed& fix) const;
        Fixed operator-(const Fixed& fix) const ;
        Fixed operator*(const Fixed& fix) const;
        Fixed operator/(const Fixed& fix) const;
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
        Fixed operator+=(const Fixed& fix);
        Fixed operator-=(const Fixed& fix);

        // more methode 
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a,const Fixed &b);
        static const Fixed&max(const Fixed &a, const Fixed &b);

    private:
        int m_number;
        static const int m_saveInt = 8;
};

std::ostream & operator<<(std::ostream& os, const Fixed& fixed);

#endif