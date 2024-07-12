#include "HumanA.hpp"
#include "HumanB.hpp"
#include  "Weapon.hpp"
#include <iostream>

int main()
{
        Weapon club = Weapon("red sword");
        HumanA bob("Bob", club);
        bob.attack();
        std::cout << "bob change the Weapon ..." << std::endl;
        club.setType("blue sword");
        bob.attack();

        Weapon dival = Weapon("blue Dragon");
        HumanB jim("Jim");
        jim.setWeapon(dival);
        jim.attack();
        std::cout << "Dival change the Weapon .." << std::endl;
        club.setType("red Dragon");
        jim.attack();
        
    return 0;
}