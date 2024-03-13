#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{

    private:
        Weapon m_weapon;
        std::string name;

    public:
        HumanA(std::string nom, Weapon tool);
        void attack();
};



#endif