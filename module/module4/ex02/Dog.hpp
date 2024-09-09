#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;

class Dog: public Animal {
    
    public:
        Dog();
        Dog(const Dog &copy);
        virtual ~Dog();
        Dog &operator=(Dog &object);
        virtual void   makeSound() const;
        Brain* getBrain() const;
        private:
            Brain *brain;
};


#endif