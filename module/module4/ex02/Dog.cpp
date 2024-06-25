#include "Dog.hpp"

void Dog::makeSound() const {
    cout << "Ouaf ouaf ouaf ouaf ouaf ouaf " << endl;
}


Dog::Dog(): Animal("Dog"){
    this->brain = new Brain;
    cout << "Dog Default constructor with parameter" << endl;
}

Brain* Dog::getBrain() const{
    return (this->brain);
}


Dog &Dog::operator=(Dog &oobject){
    delete this->brain;
    this->brain = new Brain(*(oobject.getBrain()));
    return (*this);
}


Dog::~Dog(){
    delete this->brain;
    cout << "Dog Default Desconstuctor" << endl;
}