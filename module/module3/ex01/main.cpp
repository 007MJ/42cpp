#include "ScavTrap.hpp"
#include <iostream>

int main(void){

    ScavTrap a("Naruto");
    ClapTrap c;
    ScavTrap b;


    a.attack("Pain");
    a.guardGate();

    std::cout <<"c attack =========================== " << b.getName() << std::endl;
    c.attack("Pain");
    std::cout <<"c info =========================== " << b.getName() << std::endl;
    std::cout << c.getEnergy() << std::endl;
    std::cout << c.getLife() << std::endl;
    std::cout << c.getName() << std::endl;

    std::cout <<"b info =========================== " << b.getName() << std::endl;
    std::cout << b.getEnergy() << std::endl;
    std::cout << b.getLife() << std::endl;
    std::cout << b.getName() << std::endl;
    std::cout <<"the of b before : " << b.getName() << std::endl;
    b = a;

    b.attack("Naruto");
    std::cout <<"the of b after: " << b.getName() << std::endl;

}