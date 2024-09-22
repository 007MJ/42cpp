#include "Whatever.hpp"

int main( void ) 
{
    {
        int a = 2;
        int b = 3;
        std::cout << "Before \n" << "a = " << a << ", " "b = " << b << std::endl;
        swap( a, b );
        std::cout <<  " After swap \n" << "a = " << a << ", b = " << b << std::endl;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        std::cout << "Before \n" << "c = " << c << ", " "d = " << d << std::endl;
        swap(c, d);
        std::cout << " After swap \n" << "c = " << c << ", " "d = " << d << std::endl;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
    }
        std::cout << "=================================ronde 2==================" << std::endl;
    {
        int a = 2;
        int b = 2;
        std::cout << "Before \n" << "a = " << a << ", " "b = " << b << std::endl;
        swap( a, b );
        std::cout <<  " After swap \n" << "a = " << a << ", b = " << b << std::endl;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
        std::string c = "chaine1111";
        std::string d = "chaine2";
        std::cout << "Before \n" << "c = " << c << ", " "d = " << d << std::endl;
        swap(c, d);
        std::cout << " After swap \n" << "c = " << c << ", " "d = " << d << std::endl;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
    }
    return 0;
}
