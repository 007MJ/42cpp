#include "Brain.hpp"
#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

Brain::Brain(){
    cout << "________________________" << endl;
    cout << "Brain Default constructor" << endl;
    cout << "------------------------" << endl;
}

Brain::~Brain(){
    cout << "__________________________" << endl;
    cout << "Brain Default Deconstructor" << endl;
    cout << "------------------------" << endl;
}


Brain::Brain(Brain &object){
    cout << "________________________________" << endl;
    cout << "Brain copy Default Deconstructor" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 0; i < 100; i++)
        this->idea[i] = object.getIdea(i);
}

std::string Brain::getIdea(int i) const{
    return (this->idea[i]);
}

Brain &Brain::operator=(Brain &object){
    for (int i = 0; i < 100; i++)
        this->idea[i] = object.getIdea(i);
    return (*this);
}