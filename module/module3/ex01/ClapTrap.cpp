#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

ClapTrap::ClapTrap() : m_name("Personnnage x"), m_hit(10), m_energy(10), m_attackDommange(0) {
    cout << "Class built !" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    m_name = clap.getName();
    m_hit = clap.getLife();
    m_energy = clap.getEnergy();
    m_attackDommange = clap.m_attackDommange();
}

ClapTrap::~ClapTrap(){
    cout << "Class destroyer !" << endl;
}

void ClapTrap::attack(const string &target){
    cout << "ClapTrap " << m_name <<  " attacks " << target << " causing " << m_attackDommange << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount){

    cout << "ClapTrap " << m_name <<  " take Domage of " <<  amount << endl;
    m_hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    cout << "ClapTrap " << m_name <<  " Be Repaired of  " <<  amount << endl;
    m_hit += amount;
}

unsigned int ClapTrap::getLife(){
    return (m_hit);
}

std::string ClapTrap::getName(void){
    return (m_name);
}

int ClapTrap::getEnergy(void){
    return (m_energy);
}

int ClapTrap::getAttackDomage(void){
    return (m_attackDommange);
}