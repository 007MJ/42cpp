#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {

    private:
    std::string m_nom;

    public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void announce();
    void getName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif