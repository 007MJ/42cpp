#include "WrongCat.hpp"

void WrongCat::makeSound() const {
    cout << "Wrong Cat meow meow meow meow" << endl;
}

WrongCat::WrongCat() : WrongAnimal(){
    this->type = "WrongCat";
    cout << "________________________" << endl;
    cout << "WrongCat Default constructor" << endl;
    cout << "------------------------" << endl;
}

WrongCat::WrongCat(WrongCat &wc){
    cout << "________________________" << endl;
    cout << "WrongCat copy constructor" << endl;
    cout << "------------------------" << endl;
    this->type = wc.getType();
}

WrongCat &WrongCat::operator=(WrongCat &wc){
    this->type = wc.getType();
    return (*this);
}

WrongCat::~WrongCat(){
    cout << "________________________" << endl;
    cout << "WrongCat Default Deconstructor" << endl;
    cout << "------------------------" << endl;
}