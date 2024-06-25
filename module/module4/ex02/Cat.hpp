#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;

class Cat : public Animal
{
    public:
        Cat();
        virtual  ~Cat();
        Cat &operator=(Cat &object);
        Brain * getBrain() const;
        virtual  void makeSound() const ;
    private:
        Brain *brain;
};

#endif