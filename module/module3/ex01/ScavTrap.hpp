#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
    ScavTrap(std::string name);
    ScavTrap();
    ScavTrap(ScavTrap &scav);
    ScavTrap &operator=(ScavTrap& scav);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif