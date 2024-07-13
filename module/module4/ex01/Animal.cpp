#include "Animal.hpp"


Animal::Animal(){
    cout << "- Animal Default constructor " << endl;
}

// Animal::Animal (string name) : type(name){
//     cout << "- Animal Constructor  whit Parameter" << endl;
// }

Animal::Animal(Animal &object){
    this->type = object.getType();
}

void Animal::makeSound() const{
    cout << "Animal sound .............." << endl;
}
Animal &Animal::operator=(Animal &object){
    this->type = object.getType();
    return (*this);
}

Animal::~Animal(){
    cout << "Animal Default Deconstructor " << endl;
}

string    Animal::getType() const {
    return (type);
}