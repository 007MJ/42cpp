#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string nom, Weapon& tool) : name(nom), m_weapon(tool){
}

HumanA::~HumanA(){
    
}

void    HumanA::attack(){
    std::cout << name << " attacks with their " << this->m_weapon.getType() << std::endl; 
}