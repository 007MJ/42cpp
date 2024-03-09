#ifndef PERSONANAGE_CLASS_HPP
#define PERSONANAGE_CLASS_HPP
# include <string>
# include "Arme.class.hpp"

class Personnage 
{
    // methode 
    public:
    Personnage();
    ~Personnage();
    Personnage(std::string nomArme, int degatsArmes, std::string name);
    void    recevoirDegats(int nbDegats);
    void    attaquer(Personnage &cible);
    void    boirePotionDeVie(int quantitePotion);
    // void    changerArme(std::string nomNouveleArme, int degatsNOuvelleArme);
    bool    estVivant() const;
    void    afficherEtat();

    // atribut
    private :
    int         m_life;
    int         m_mana;
    int         m_degatsArme;
    Arme        *m_arme;
    std::string m_name;
};


#endif
