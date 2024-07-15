#include "WrongCat.hpp"

void WrongCat::makeSound() const {
    cout << "meow meow meow meow" << endl;
}

WrongCat::WrongCat() {
    this->type = "WrongGCat";
    cout << "WrongCat Default constructor" << endl;
}

WrongCat::WrongCat(WrongCat &wc){
    this->type = wc.getType();
}


WrongCat& WrongCat::operator=(WrongCat &wr){
    this->type = wr.getType();
    return (*this);
}

WrongCat::~WrongCat(){
    cout << "WrongCat Default Deconstructor" << endl;
}