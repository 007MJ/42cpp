#include "Zombie.hpp"

void Zombie::randomChump( std::string name ){
    Zombie random(name);
    random.announce();
}