#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *zoo = new Zombie;
    nom = name;
    return (zoo);
}