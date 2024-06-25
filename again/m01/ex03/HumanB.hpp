#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanB 
{
    private:
        std::string h_name;
        Weapon h_weapon;
    public:
        void attack();
        HumanB();
        ~HumanB();
        HumanB(std::string name, Weapon type);
        HumanB(std::string name);
        void   setWeapon(Weapon type);
        
};

#endif
