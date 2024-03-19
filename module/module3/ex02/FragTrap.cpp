#include "FragTrap.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

FragTrap::FragTrap(string name) : ClapTrap(name){
    this->m_energy = 100;
    this->m_hit = 100;
    this->m_attackDommange = 30;
    cout << " FragTrap Constructor member function " << endl;
}

FragTrap::~FragTrap(){
     cout << " FragTrap Destructor member function " << endl;
}

void FragTrap::highFivesGuys(){
    cout << " HighFivesGuys " << endl;
}