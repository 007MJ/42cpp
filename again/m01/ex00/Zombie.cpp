#include "Zombie.hpp"

Zombie::Zombie(std::string name) : z_name(name){}

Zombie::~Zombie(){
}

void Zombie:: announce (void)
{
    if (z_name == "FOO")
        std::cout << z_name << " BraiiiiiiinnnzzzZ... " << std::endl;
    else
        std::cout << "<" <<  z_name << ">" << " BraiiiiiiinnnzzzZ... " << std::endl;
}