#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

void    Zombie::announce(void)
{
    string f = "FOO";
    if (nom == f)
        cout << nom << ": BraiiiiiiinnnzzzZ...";
    else
        cout << "<" << nom << ">:" << " BraiiiiiiinnnzzzZ...";
}
