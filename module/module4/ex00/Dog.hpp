#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Dog: public Animal {
    
    public:
      virtual void   makeSound() const;
      Dog();
      Dog(Dog &g);
      Dog &operator=(Dog &g);
      virtual ~Dog();

};


#endif