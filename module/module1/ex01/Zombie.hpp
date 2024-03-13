#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {

    private:
    std::string m_nom;

    public:
    Zombie();
    ~Zombie();
    void announce();
    Zombie* zombieHorde(int N, std::string name);

};


#endif