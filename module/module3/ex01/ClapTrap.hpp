#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap 
{

    public:
        ClapTrap();
        ClapTrap(const ClapTrap &clap);
        ~ClapTrap();
        ClapTrap &operator=( const ClapTrap& clap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int getLife (void);
        std::string getName(void);
        int getEnergy(void);
        int getAttackDomage(void);

    private:
    std::string         m_name;
    unsigned int        m_hit;
    int                 m_energy;
    int                 m_attackDommange;

};
#endif
