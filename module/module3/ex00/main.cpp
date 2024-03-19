#include "ClapTrap.hpp"

int main (void){

    ClapTrap clap("Eliott");
    clap.attack("james");
    clap.takeDamage(4);
    clap.beRepaired(6);

    ClapTrap a;

    ClapTrap b("samuel jackson");

    a = b;
    a.attack("james");

    
    a.setAttackDomage(5);
    
    for (int i = 0; i < 12 ; i ++)
        a.attack("james");
}