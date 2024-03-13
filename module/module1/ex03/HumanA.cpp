#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nom, Weapon tool) : name(nom), m_weapon(tool){
}

void    HumanA::attack(){
    std::string type = m_weapon.getType();
    std::cout << name << " attacks with their " << type << std::endl; 
}