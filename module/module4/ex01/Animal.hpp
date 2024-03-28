#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal {

    public:
         Animal();
         Animal(std::string  type);
         Animal(Animal &object);
         Animal &operator=(Animal &object);
         virtual void  makeSound() const;
         std::string  getType() const;
         virtual ~Animal();
   protected:
        std::string type;    
};



#endif