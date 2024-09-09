#include "Animal.hpp"
#include "Cat.hpp"


void Cat::makeSound() const {
    cout << "meow meow meow meow" << endl;
}

Cat::Cat(){
    this->brain = new Brain;
    cout << "Cat Default constructor " << endl;
}

Cat::Cat(const Cat &copy){
    cout << "Cat copy constructor " << endl;
    this->brain = new Brain(*(copy.getBrain()));
}

Cat &Cat::operator=(Cat &oobject){
    cout << "Cat constructor = " << endl;
    delete this->brain;
    this->brain = new Brain(*(oobject.getBrain()));
    return (*this);
}

Brain* Cat::getBrain() const{
    return (this->brain);
}

Cat::~Cat(){
    delete this->brain;
    cout << "Cat Default Deconstructor" << endl;
}
