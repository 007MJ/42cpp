#include "Zombie.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void    randomChump(std::string name)
{
    Zombie newbie(name);
    newbie.announce();
}