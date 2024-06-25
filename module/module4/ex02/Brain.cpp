#include "Brain.hpp"
#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

Brain::Brain(){
    cout << "- Brain Default constructor" << endl;
}

Brain::~Brain()
{
    cout << "- Brain Default Deconstructor" << endl;
}


Brain::Brain(Brain &object){
    cout << "- Brain copy Default Deconstructor" << endl;
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