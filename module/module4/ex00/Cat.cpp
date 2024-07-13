#include "Animal.hpp"
#include "Cat.hpp"


void Cat::makeSound() const {
    cout << "meow meow meow meow" << endl;
}

Cat::Cat() : Animal("Cat"){
    cout << "________________________" << endl;
    cout << "Cat Default constructor" << endl;
    cout << "------------------------" << endl;
}

Cat::Cat(Cat &c)
{
    this->type = c.getType();
}

Cat &Cat::operator=(Cat &c){
    this->type = c.getType();
    return (*this);
}

Cat::~Cat(){
    cout << "________________________" << endl;
    cout << "Cat Default Deconstructor" << endl;
    cout << "------------------------" << endl;
}