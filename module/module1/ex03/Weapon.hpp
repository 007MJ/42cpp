#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon {
    private:
    std::string type;

    public:
    std::string  getType() const;
    void setType(std::string settype);
};
#endif