#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type) : w_type(type) {}

void Weapon::setType(std::string type){
    w_type = type;
}

std::string Weapon::getType() const{
    return (w_type);
}