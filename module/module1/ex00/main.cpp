#include "Zombie.hpp"

int main(void)
{
    Zombie bob("bob");
    bob.announce();

    randomChump("FOO");
    Zombie *lobie = newZombie("brain");
    delete lobie;
}