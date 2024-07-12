#include "FragTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


int main(void){
    FragTrap j("Sasuke");
    FragTrap g("Naruto shippuden");
    cout<<"===============================================" << endl;
    g.attack("Sasuke Shippuden");
    cout<<"===============================================" << endl;
    j.attack("Sasuke");
    cout<<"========================" << "operator \" = \" << ======================" << endl;
    g = j;


    cout<<"========================copy constructor======================" << endl;
    FragTrap sasa(g);

    g.attack("Madara");

    g.highFivesGuys();
}
