#include "WrongCat.hpp"

void WRONGCat::makeSound() const {
    cout << "meow meow meow meow" << endl;
}

WRONGCat::WRONGCat() : WrongAnimal(){
    this->type = "WrongCat";
    cout << "WRONGCat Default constructor" << endl;
}

WRONGCat::WRONGCat(std::string type) : WrongAnimal(type) {
    cout << "Cat Default constructor" << endl;
} 

WRONGCat::~WRONGCat(){
    cout << "WRONGCat Default Deconstructor" << endl;
}