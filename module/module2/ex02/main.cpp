#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    Fixed c;

     c = b / 2;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    // std::cout << b << std::endl;

    std::cout << "=================operateur==================="<< std::endl;
    std::cout << "nb -> a " << a << " and " << " nb -> b " << b << std::endl;
    std::cout << "max     : " << Fixed::max( a, b ) << std::endl;
    std::cout << "min     : " << Fixed::min( a, b ) << std::endl;
    std::cout << "check the > and < function" << std::endl;
    std::cout << "for a > b  : " <<  ( a > b ) << std::endl;
    std::cout << "for a < b  : " <<  ( a < b ) << std::endl;
    std::cout << "check the >= and <= function" << std::endl;
    std::cout << "for a >= b : " <<  ( a >= b ) << std::endl;
    std::cout << "for a <= b : " <<  ( a <= b ) << std::endl;
    std::cout << "check the != and == function" << std::endl;
    std::cout << "for a != b : " <<  ( a != b ) << std::endl;
    std::cout << "for a == b : " <<  ( a == b ) << std::endl;
    std::cout << "check the / " << std::endl;
    std::cout << "for a / b  : " << (a / b) << std::endl;
    std::cout << "check the -- " << std::endl;
    std::cout << "for --a  : " << --a << std::endl;
    std::cout << "check the -= " << std::endl;
    std::cout << "for a -= 3 : " << (a -= 3)  << std::endl;
}
