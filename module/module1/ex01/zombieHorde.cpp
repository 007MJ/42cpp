#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int n, std::string name)
{
    Zombie *newbie = new Zombie [n];
    for (int i = 0; i < n; i++)
    {
        newbie[i].announce();
    }
    return (newbie);
}