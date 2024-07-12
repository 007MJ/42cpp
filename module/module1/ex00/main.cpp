#include "Zombie.hpp"

int main(void)
{
    Zombie bob("bob");
    Zombie noe("noe");
    bob.announce();

    randomChump("FOO");
    Zombie *lobie = newZombie("brain");
    Zombie *same= newZombie("same");
    delete lobie;
    delete same;
}