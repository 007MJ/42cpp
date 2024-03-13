#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nom) : name(nom){
}


void    HumanB::attack(){
    std::string type = m_weapon.getType();
    std::cout << name << " attacks with their " << type << std::endl; 
}

void    HumanB::setWeapon(Weapon tool){
    m_weapon.getType() = tool.getType();
}