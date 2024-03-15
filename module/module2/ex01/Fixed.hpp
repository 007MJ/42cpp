#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {

    public:
        Fixed();
        Fixed(int number);
        Fixed(float number);
        ~Fixed();
        Fixed(const Fixed& Fix);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed operator=(const Fixed& fix);

    private:
        int m_number;
        static int m_saveInt;
};


#endif