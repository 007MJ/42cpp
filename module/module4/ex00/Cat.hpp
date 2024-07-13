#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Cat : public Animal
{
    public:
       virtual  void makeSound() const ;
        Cat();
        Cat(Cat &c);
        Cat& operator=(Cat &c);
       virtual  ~Cat();
};

#endif