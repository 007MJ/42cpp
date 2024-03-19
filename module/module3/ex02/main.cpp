#include "FragTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;


int main(void){
    FragTrap j("Naruto");
    FragTrap g("Naruto shippuden");
    cout<<"===============================================" << endl;
    g.attack("Sasuke Shippuden");
    cout<<"===============================================" << endl;
    j.attack("Sasuke");
    cout<<"===============================================" << endl;
    g = j;
    g.attack("Madara");

    g.highFivesGuys();
}