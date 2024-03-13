#ifndef HUMANB_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanB  {
    private:
    Weapon m_weapon;
    std::string name;

    public:
    HumanB(std::string nom);
    void setWeapon(Weapon tool);
    void attack();
};




#endif 