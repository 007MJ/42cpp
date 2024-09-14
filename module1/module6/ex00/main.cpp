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
}