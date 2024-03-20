#include "Animal.hpp"


Animal::Animal(){
    cout << " Default constructor " << endl;
}

Animal::Animal (string name) : type(name){
    cout << " Constructor  whit Parameter" << endl;

}

Animal::Animal(Animal &object){
    this->type = object.getType();
}

Animal &Animal::operator=(Animal &object){
    this->type = object.getType();
    return (*this);
}

Animal::~Animal(){
    cout << " Default Deconstructor " << endl;
}

string    Animal::getType(){
    return (type);
}