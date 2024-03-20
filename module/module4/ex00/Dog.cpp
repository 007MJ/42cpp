#include "Dog.hpp"

void Dog::makeSound() const {
    cout << "Ouaf ouaf ouaf ouaf ouaf ouaf " << endl;
}

Dog::Dog() : Animal(){
    this->type = "Dog";
    cout << "------------------------" << endl;
    cout << "Dog Default constructor" << endl;
    cout << "------------------------" << endl;
}


Dog::Dog(std::string name): Animal(name){
    cout << "------------------------" << endl;
    cout << "Dog Default constructor with parameter" << endl;
    cout << "------------------------" << endl;
}

Dog::~Dog(){
    cout << "---------------------------------" << endl;
    cout << "Dog Default Desconstuctor" << endl;
    cout << "---------------------------------" << endl;
}