#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zoo = new Zombie(name);
    return (zoo);
}