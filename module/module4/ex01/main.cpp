#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << i->getType() << " -> ";
    i->makeSound(); //will output the cat sound!
    std::cout << j->getType() << " -> ";
    j->makeSound();
    meta->makeSound();


    delete meta;
    delete i;
    delete j;


    cout << "====================================" << endl;
    const WrongAnimal* met = new WrongAnimal();
    const WrongAnimal *jj = new WRONGCat();

    std::cout << jj->getType() << " -> ";
    met->makeSound();

    Dog a;
    Dog b;

    a = b;
    delete met;
    delete jj;
}