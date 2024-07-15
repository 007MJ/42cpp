#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Animal {

    public:
         virtual void  makeSound()  const = 0;
         std::string  getType() const;
         virtual ~Animal();
   protected:
        std::string type;    
         Animal();
         Animal(Animal &object);
         Animal &operator=(Animal &object);
};



#endif