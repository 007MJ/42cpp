#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
 {
    Zombie *n = new Zombie(name);
    return (n);
 }