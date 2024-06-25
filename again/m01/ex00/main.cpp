#include "Zombie.hpp"

int main(void)
{
    Zombie joe("James"), zoe("FOO");
    joe.announce();
    zoe.announce();
    zoe.randomChump("Random");

    Zombie *newKim = zoe.newZombie("Kim");
    newKim->announce();
    delete newKim;
}