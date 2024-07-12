#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

void    Zombie::announce(void)
{
    string f = "FOO";
    if (nom == f)
        cout << this->nom << ": BraiiiiiiinnnzzzZ..." << endl;
    else
        cout << "<" << this->nom << ">:" << " BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie(){
    cout << "Zombie "<< this->nom << " destructor call" << endl;
}

Zombie::Zombie() : nom(){
    cout << "Zombie destructor call" << endl;
}
Zombie::Zombie(std::string name) : nom(name){
    cout << "zombie string name constructor call " << endl;
}