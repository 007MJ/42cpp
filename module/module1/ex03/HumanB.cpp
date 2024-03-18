#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string nom) :m_weapon(NULL), name(nom){
}
HumanB::~HumanB(){
    
}

void    HumanB::attack(){
    if (m_weapon == NULL)
        return ;
    std::string type = m_weapon->getType();
    std::cout << name << " attacks with their " << type << std::endl; 
}

void    HumanB::setWeapon(Weapon &tool){
    m_weapon = &tool;
}
                            
