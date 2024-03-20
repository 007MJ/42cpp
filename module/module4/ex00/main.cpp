#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;


cout << "====================================" << endl;
    const WrongAnimal* met = new WrongAnimal();
    const WrongAnimal *jj = new WRONGCat();
    std::cout << jj->getType() << " " << std::endl;
    met->makeSound();
}