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
        std::cout << "min = " << min( a, b ) << std::endl;
        std::cout << "max = " << max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        std::cout << "Before \n" << "c = " << c << ", " "d = " << d << std::endl;
        swap(c, d);
        std::cout << " After swap \n" << "c = " << c << ", " "d = " << d << std::endl;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min = " << min( c, d ) << std::endl;
        std::cout << "max = " << max( c, d ) << std::endl;
    }
        std::cout << "=================================ronde 2==================" << std::endl;
    {
        int a = 2;
        int b = 2;
        std::cout << "Before \n" << "a = " << a << ", " "b = " << b << std::endl;
        swap( a, b );
        std::cout <<  " After swap \n" << "a = " << a << ", b = " << b << std::endl;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min = " << min( a, b ) << std::endl;
        std::cout << "max = " << max( a, b ) << std::endl;
        std::string c = "chaine1111";
        std::string d = "chaine2";
        std::cout << "Before \n" << "c = " << c << ", " "d = " << d << std::endl;
        swap(c, d);
        std::cout << " After swap \n" << "c = " << c << ", " "d = " << d << std::endl;
        a = -1;
        b = -53;
        std:: cout << "===================== Min and Max =========================" << std::endl;
        std::cout << "min = " << min( a, b )  << std::endl;
        std::cout << "max = " << max( a, b ) << std::endl;
    }
    return 0;
}
