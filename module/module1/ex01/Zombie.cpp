#include "Zombie.hpp"

using std::cout;
using std::endl;
using std::string;

void    Zombie::announce(void){

    string f = "Foo";
    if (m_nom == f)
        cout << m_nom << ": BraiiiiiiinnnzzzZ..." << endl;
    else
        cout << "<" << m_nom << ">:" << " BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(std::string name) : m_nom(name){
    cout << "Zombie constructor call" << endl;
}

Zombie::Zombie(){
    cout << "Zombie constructor call" << endl;
}

Zombie::~Zombie(){
    cout << "Zombie "<< this->m_nom << " destructor call" << endl;
    m_nom.empty();
}

void  Zombie::getName(string name){
    m_nom = name; 
}

