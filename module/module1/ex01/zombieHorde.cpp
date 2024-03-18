#include "Zombie.hpp"
#include <new>

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *newbie = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        newbie[i].getName(name);
        newbie[i].announce();
    }
    return (newbie);
}