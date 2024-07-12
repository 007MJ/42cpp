#include "ScavTrap.hpp"
#include <iostream>
#include <string>


using std::cout;
using std::endl;

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name){
    cout << "ScavTrap Constructor "<< name << endl;
    this->m_attackDommange = 20;
    this->m_energy = 50;
    this->m_hit = 100;
}

ScavTrap::ScavTrap(ScavTrap &scav){
    this->m_name = scav.m_name;
    this->m_energy = scav.m_energy;
    this->m_attackDommange = scav.m_attackDommange;
    this->m_hit = scav.m_hit;
}

ScavTrap::~ScavTrap() {
    cout << "ScavTrap deconstructor memner fucnntion  " << endl;
}

ScavTrap::ScavTrap() : ClapTrap("ninja of leaf"){
    cout << "ScavTrap Default Constructor ninja of leaf"<<  endl;
    this->m_attackDommange = 20;
    this->m_energy = 50;
    this->m_hit = 100;
}


ScavTrap::ScavTrap(ScavTrap &clap)){
    this->m_name = clap.m_name;
    this->m_hit = clap.m_hit;
    this->m_energy = clap.m_energy;
    this->m_attackDommange = clap.m_attackDommange;
}


ScavTrap &ScavTrap::operator=(ScavTrap& scav){
    cout << "ScavTrap Constructor operator =" << endl;
    this->setEnergy(scav.getEnergy());
    this->setAttackDomage(getAttackDomage());
    this->setLife(getLife());
    this->m_name = scav.getName();
    return (*this);
 }

void    ScavTrap::guardGate(){
    cout << m_name << " entered into Gate keeper mode " << endl;
}

void ScavTrap::attack(const std::string &target){
    cout << m_name << " attack from ScavTrap" << endl;
    if (this->m_energy > 0)
    {
        cout << "ClapTrap " << m_name <<  " attacks " << target << " causing " << m_attackDommange << " points of damage!" << endl;
        m_energy -= 1;
    }
    else 
    {
        cout << "No more Energy " << endl;
        this->m_energy = 0;
    }
}