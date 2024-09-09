#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap 
{

    public:
        ClapTrap();
        ClapTrap(ClapTrap &clap);
        ClapTrap(std::string name);
        ClapTrap &operator=(ClapTrap& clap);
        virtual ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int getLife (void);
        std::string getName(void);
        int getEnergy(void);
        int getAttackDomage(void);
        
        void setLife (unsigned int life);
        void setName(std::string name);
        void setEnergy(int energy);
        void setAttackDomage(int dommageAttack);
        bool isEnergy(void);

    protected:
        std::string         m_name;
        unsigned int        m_hit;
        int                 m_energy;
        int                 m_attackDommange;

};
#endif
