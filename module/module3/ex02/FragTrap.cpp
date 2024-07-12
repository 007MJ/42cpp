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
    cout << " FragTrap Constructor " << name << endl;
}

FragTrap::~FragTrap(){
     cout << " FragTrap Destructor member function " << endl;
}

void FragTrap::highFivesGuys(){
    cout << " HighFivesGuys " << endl;
}

FragTrap::FragTrap(FragTrap &scav){
     cout << " FragTrap copy constructor " << endl;
    this->m_name = scav.m_name;
    this->m_energy = scav.m_energy;
    this->m_attackDommange = scav.m_attackDommange;
    this->m_hit = scav.m_hit;
}

FragTrap::FragTrap() : ClapTrap("ninja of leaf"){
    cout << "FragTrap Default Constructor ninja of leaf"<<  endl;
    this->m_attackDommange = 30;
    this->m_energy = 100;
    this->m_hit = 100;
}

FragTrap &FragTrap::operator=(FragTrap& scav){
    cout << "FragTrap Constructor operator =" << endl;
    this->setEnergy(scav.getEnergy());
    this->setAttackDomage(getAttackDomage());
    this->setLife(getLife());
    this->m_name = scav.getName();
    return (*this);
 }