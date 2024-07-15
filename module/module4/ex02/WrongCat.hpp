#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class WrongCat : public WrongAnimal
{
    public:
        void makeSound() const ;
        WrongCat();
        WrongCat(WrongCat &wr);
        WrongCat &operator=(WrongCat &wr);
        ~WrongCat();
};


#endif