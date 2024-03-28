#include "Animal.hpp"
#include "Cat.hpp"


void Cat::makeSound() const {
    cout << "meow meow meow meow" << endl;
}

Cat::Cat() : Animal("Cat"){
    this->brain = new Brain;
    cout << "________________________" << endl;
    cout << "Cat Default constructor " << endl;
    cout << "------------------------" << endl;
}


Cat &Cat::operator=(Cat &oobject){
    delete this->brain;
    this->brain = new Brain(*(oobject.getBrain()));
    return (*this);
}

Brain* Cat::getBrain() const{
    return (this->brain);
}

Cat::~Cat(){
    delete this->brain;
    cout << "________________________" << endl;
    cout << "Cat Default Deconstructor" << endl;
    cout << "------------------------" << endl;
}
