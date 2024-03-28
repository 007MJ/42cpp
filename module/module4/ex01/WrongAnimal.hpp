#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal {

    public:
        WrongAnimal();
        WrongAnimal(std::string  type);
        WrongAnimal(WrongAnimal &object);
        WrongAnimal &operator=(WrongAnimal &object);
        void  makeSound() const;
        std::string  getType() const;
        ~WrongAnimal();
    protected:
        std::string type;    
};

#endif