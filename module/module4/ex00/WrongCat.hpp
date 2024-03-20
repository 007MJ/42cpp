#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class WRONGCat : public WrongAnimal
{
    public:
        void makeSound() const ;
        WRONGCat();
        WRONGCat(std::string type);
         ~WRONGCat();
};


#endif