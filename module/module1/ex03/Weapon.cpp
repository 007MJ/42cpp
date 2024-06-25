#include "Weapon.hpp"

std::string const & Weapon::getType(){
    return (type);
}

void    Weapon::setType(std::string setttype){
    type = setttype;
}

Weapon::~Weapon(){}

Weapon::Weapon() : type(){}

Weapon::Weapon(std::string t) : type(t){}
