#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

ClapTrap::ClapTrap() : m_name("Personnnage x"), m_hit(10), m_energy(10), m_attackDommange(0) {
    cout << "Constructor member function" << endl;
}

ClapTrap::ClapTrap(ClapTrap &clap) : m_name(clap.getName()), m_hit(clap.getLife()), m_energy(clap.getEnergy()),
 m_attackDommange(getAttackDomage()){
}

ClapTrap&  ClapTrap::operator=(ClapTrap &clap){
    this->setEnergy(clap.getEnergy());
    this->setAttackDomage(getAttackDomage());
    this->setLife(getLife());
    this->m_name = clap.getName();
    return (*this);
}

bool    ClapTrap::isEnergy(void){
    if (m_energy <= 0)
        return (m_energy = 0, false);
    else
        return (true);
}

ClapTrap::~ClapTrap(){
    cout << "destructor member function " << endl;
}
ClapTrap::ClapTrap(string name) : m_name(name), m_hit(10), m_energy(10), m_attackDommange(0) {
    cout << "Constructor member function !" << endl;
}

void ClapTrap::attack(const string &target){
    if (isEnergy())
    {
        cout << "ClapTrap " << m_name <<  " attacks " << target << " causing " << m_attackDommange << " points of damage!" << endl;
        m_energy -= 1;
    }
    else 
        cout << "No more Energy " << endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    cout << "ClapTrap " << m_name <<  " take Domage of " <<  amount << endl;
    m_hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (isEnergy())
    {
        cout << "ClapTrap " << m_name <<  " Be Repaired of  " <<  amount << endl;
        m_energy -= 1;
        m_hit += amount;
    }else
        cout << "No more Energy " << endl;
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




void ClapTrap::setLife(unsigned int life){
    m_hit = life;
}

void ClapTrap::setName(std::string name){
    m_name = name;
}

void ClapTrap::setEnergy(int energy){
    m_energy = energy;
}

void ClapTrap::setAttackDomage(int dommageAttack){
    m_attackDommange = dommageAttack;
}
