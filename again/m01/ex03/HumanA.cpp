#include "HumanA.hpp"

// HumanA::HumanA(){}
HumanA::HumanA(std::string name, Weapon type) : h_name(name), h_weapon(type){}

void HumanA::attack()
{
    std::cout << h_name << " attacks with their " << h_weapon.getType() << std::endl;
}