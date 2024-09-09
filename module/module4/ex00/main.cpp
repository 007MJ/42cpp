#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " ";
    j->makeSound();
    std::cout << i->getType() << " ";
    i->makeSound(); //will output the cat sound!
    std::cout << meta->getType() << " ";
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    cout << "====================================" << endl;
    const WrongAnimal *jj = new WrongCat();
    std::cout << jj->getType() << " ";
    jj->makeSound();
    delete jj;
}
