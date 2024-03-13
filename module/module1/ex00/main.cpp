#include "Zombie.hpp"

int main(void)
{
    Zombie zombieshow;
    zombieshow.announce();

    Zombie *zombiepointeur;
    zombiepointeur = zombieshow.newZombie("FOO");

    zombiepointeur->randomChump("Brain");
    delete zombiepointeur;
}