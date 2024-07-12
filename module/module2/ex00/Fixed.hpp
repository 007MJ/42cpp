#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& Fix);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed &operator=(const Fixed& fix);

    private:
        int m_number;
        static int m_saveInt;
};


#endif