#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{

    private:
        std::string name;
        Weapon &m_weapon;

    public:
        HumanA(std::string nom, Weapon &tool);
        ~HumanA();
        void attack();
};
#endif