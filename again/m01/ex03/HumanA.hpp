#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA 
{
    private:
        std::string h_name;
        Weapon h_weapon;

    public:
        void attack();
        HumanA(std::string name, Weapon type);

};

#endif