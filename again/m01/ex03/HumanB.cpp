#include "HumanB.hpp"

HumanB::HumanB(){}
HumanB::HumanB(std::string name) : h_name(name){}
HumanB::HumanB(std::string name, Weapon type) : h_name(name), h_weapon(type){}
HumanB::~HumanB(){}


void    HumanB::attack(){
    std::cout << h_name << " attacks with their " << h_weapon.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon type){
    h_weapon = type;
}