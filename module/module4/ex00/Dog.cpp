#include "Dog.hpp"

void Dog::makeSound() const {
    cout << "Ouaf ouaf ouaf ouaf ouaf ouaf " << endl;
}

Dog::Dog() : Animal("Dog"){
    cout << "------------------------" << endl;
    cout << "Dog Default constructor" << endl;
    cout << "------------------------" << endl;
}

Dog::Dog(Dog &g){
    this->type = g.getType();
}

Dog &Dog::operator=(Dog &g){
    this->type = g.getType();
    return (*this);
}

Dog::~Dog(){
    cout << "---------------------------------" << endl;
    cout << "Dog Default Desconstuctor" << endl;
    cout << "---------------------------------" << endl;
}