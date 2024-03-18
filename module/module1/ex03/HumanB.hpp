#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB  {
    private:
    Weapon *m_weapon;
    std::string name;

    public:
    HumanB(std::string nom);
    ~HumanB();
    void setWeapon(Weapon &tool);
    void attack();
};




#endif 