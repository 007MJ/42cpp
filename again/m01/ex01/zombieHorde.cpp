#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie zombie;
    Zombie *horde  = new Zombie[N];
    for (int i = 0; i < N; i++){
        horde[i].setName(name);
        horde[i].announce();
    }  
    return (horde);
}