#include "Zombie.hpp"

int main(void)
{
    Zombie many("Loe");
    many.announce();
    Zombie *get = many.zombieHorde(3, "Many");
    delete[] get;
}