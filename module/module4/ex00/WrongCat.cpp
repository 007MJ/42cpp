#include "WrongCat.hpp"

void WRONGCat::makeSound() const {
    cout << "meow meow meow meow" << endl;
}

WRONGCat::WRONGCat() : WrongAnimal(){
    this->type = "WRONGCat";
    cout << "________________________" << endl;
    cout << "WRONGCat Default constructor" << endl;
    cout << "------------------------" << endl;
}

WRONGCat::WRONGCat(std::string type) : WrongAnimal(type) {
    cout << "________________________" << endl;
    cout << "Cat Default constructor" << endl;
    cout << "------------------------" << endl;
} 

WRONGCat::~WRONGCat(){
    cout << "________________________" << endl;
    cout << "WRONGCat Default Deconstructor" << endl;
    cout << "------------------------" << endl;
}