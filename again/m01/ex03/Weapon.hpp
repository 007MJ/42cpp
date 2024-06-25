#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon 
{
    private:
        std::string w_type;
    public:
    Weapon();
    Weapon(std::string type);
    std::string getType() const;
    void setType(std::string type);
};

#endif