#ifndef FIXED_HPP
#define FIXED_HPP


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
        Fixed operator=(const Fixed& fix);
        bool operator!=(const Fixed& fix);
        bool operator==(const Fixed& fix);
        bool operator>(const Fixed& fix);
        bool operator>=(const Fixed& fix);
        bool operator<(const Fixed& fix);
        bool operator<=(const Fixed& fix);
        Fixed operator+(const Fixed& fix);
        Fixed operator-(const Fixed& fix);
        Fixed operator*(const Fixed& fix);
        Fixed operator/(const Fixed& fix);
        Fixed operator++();
        Fixed operator--();
        Fixed operator+=(const Fixed& fix);
        Fixed operator-=(const Fixed& fix);

        // more methode 
        static int min(int &nb, int &nb2);
        static int max(int &nb, int &nb2);
        static int min(int const &nb, int const &nb2);
        static int max(int const &nb, int const &nb2);

    private:
        int m_number;
        static int m_saveInt;
};


#endif