#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon {
    private:
    std::string type;

    public:
    Weapon();
    Weapon(std::string t);
    ~Weapon();
    std::string  const & getType() const;
    void setType(std::string settype);
};
#endif