#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    cout << "WrongAnimal Default constructor " << endl;
}


WrongAnimal::WrongAnimal(WrongAnimal &object){
    this->type = object.getType();
}

void WrongAnimal::makeSound() const{
    cout << "WrongAnimal sound .............." << endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal &object){
    this->type = object.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    cout << "WrongAnimal Default Deconstructor " << endl;
}

string    WrongAnimal::getType() const {
    return (type);
}