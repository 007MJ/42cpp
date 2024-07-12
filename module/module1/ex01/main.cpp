#include "Zombie.hpp"
using std::cout;
using std::endl;
using std::string;

int main (void)
{
    {
        Zombie *foobie;
        string name = "Foo";
        int     n = 2;
        foobie = zombieHorde(n, name);
        delete[] foobie;
        foobie = 0;
    }

    {
        Zombie *foobie;
        string name = "Dior";
        int     n = 10;
        foobie = zombieHorde(n, name);
        delete[] foobie;
        foobie = 0;
    }


}   