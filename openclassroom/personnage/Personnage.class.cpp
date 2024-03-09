#include "Personnage.class.hpp"
#include "Arme.class.hpp"

using namespace :: std;

Personnage::Personnage() : m_life(100), m_mana(100), m_arme(0), m_name("Personne X")
{
    m_arme = new Arme();
}
Personnage::~Personnage()
{
    delete m_arme;
}
Personnage::Personnage(string nomArme, int degatsArmes , string name) : m_life(100), m_mana(100), m_arme(0), m_name(name)
{
    m_arme = new Arme(nomArme, degatsArmes);
}
bool Personnage::estVivant() const{
    return m_life > 0;
}
void Personnage::attaquer(Personnage &cible){
    cible.recevoirDegats(m_arme->);
}
void Personnage::boirePotionDeVie(int quantitePotion){
    m_life += quantitePotion;

    if (m_life > 100)
    {
        m_life = 100;
    }
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_life -= nbDegats;

    if (m_life < 0) 
    {
        m_life = 0;
    }
}
// void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme){
//     m_arme(nomNouvelleArme, degatsNouvelleArme);
// }

void Personnage::afficherEtat()
{
    cout << "nom    :   " << m_name << endl; 
    cout << "vie    :   " << m_life << endl;
    cout << "mana   :   " << m_mana << endl;
    m_arme.afficher();
}