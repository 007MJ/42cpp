#include "Zombie.hpp"

void    Zombie::randomChump(std::string name)
{
    Zombie newbie;
    nom = name;
    newbie.announce();
}