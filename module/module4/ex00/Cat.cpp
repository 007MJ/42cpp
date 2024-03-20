#include "Animal.hpp"
#include "Cat.hpp"


void Cat::makeSoud() const {
    cout << "meow meow meow meow" << endl;
}

Cat::Cat() : Animal(){
    this->type = "Cat";
    cout << "________________________" << endl;
    cout << "Cat Default constructor" << endl;
    cout << "------------------------" << endl;
}

Cat::Cat(std::string type) : Animal(type) {
    cout << "________________________" << endl;
    cout << "Cat Default constructor" << endl;
    cout << "------------------------" << endl;
} 

Cat::~Cat(){
    cout << "________________________" << endl;
    cout << "Cat Default Deconstructor" << endl;
    cout << "------------------------" << endl;
}