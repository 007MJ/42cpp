#include "Zombie.hpp"
using std::cout;
using std::endl;
using std::string;

int main (void)
{
    Zombie zombie;
    Zombie *foobie;
    string name = "Foo";
    int     n = 2;
    foobie = zombie.zombieHorde(n, name);

    delete[] foobie;
}