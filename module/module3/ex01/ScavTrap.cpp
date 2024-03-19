#include "ScavTrap.hpp"
#include <iostream>
#include <string>


using std::cout;
using std::endl;

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name){
    cout << "ScavTrap Constructor member function " << endl;
    this->m_attackDommange = 20;
    this->m_energy = 50;
    this->m_hit = 100;
}

ScavTrap::~ScavTrap() {
    cout << "ScavTrap deconstructor memner fucnntion  " << endl;
}

void    ScavTrap::guardGate(){
    cout << m_name << " entered into Gate keepe mode " << endl;
}