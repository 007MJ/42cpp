#include <iostream>
#include <string>
#include "CastType.hpp"


int  main (int ac, const char **arv){

    if (ac > 2 || ac < 2)
        return (std::cout << "no argu or have to much" <<std::endl, 2);
    {
        Casttype number(arv[1]);
        number.printliterals();
    }

    // {
    //     Casttype number("inff");
    //     number.printliterals();
    // }
    
    // std::cout << "size :" << data.size() << std::endl;
    // std::cout << "char : " << oneChar(data) << std::endl;
    // std::cout << "int : " << onlydigit(data) << std::endl;
    // std::cout << "float : " << findFloat(data) << std::endl;
    // std::cout << "Double: " << findDouble(data) << std::endl;
    // char c = static_cast<char>();
    // std::cout<< "char : " << c << std::endl;
}