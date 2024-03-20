#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

class Dog: public Animal {
    
    public:
        virtual void   makeSoud() const;
        Dog();
        Dog(std:: string name);
        virtual ~Dog();

};


#endif