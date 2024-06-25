#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

    private:
        std::string z_name;

    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        Zombie(std::string name);
        void announce(void);
        Zombie *zombieHorde(int N, std::string name);

};


#endif

