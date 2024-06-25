#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

    private:
        std::string z_name;

    public:
        ~Zombie();
        Zombie();
        Zombie(std::string name);
        Zombie *newZombie(std::string name);
        void randomChump( std::string name );
        void announce(void);

};


#endif

