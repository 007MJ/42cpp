#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Dog* dog_j = new Dog();
    const Cat* cat_i = new Cat();
    std::cout << "now cat sound -> " ;
    std::cout << cat_i->getType() << " -> ";
    cat_i->makeSound(); //will output the cat sound!
    std::cout << dog_j->getType() << " -> ";
    dog_j->makeSound();

    delete cat_i;
    delete dog_j;
    cout << "|||||||||||||||||||||||||||||||||||||||||| Every thing go wrong ||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    const WrongAnimal *wrong_jj = new WrongCat();

    std::cout << wrong_jj->getType() << " -> ";

    Dog dog_a;
    Dog dog_b;

    dog_a = dog_b;
    delete wrong_jj;
}