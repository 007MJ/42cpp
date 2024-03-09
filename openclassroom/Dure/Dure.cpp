#include "Dure.hpp"



Dure::Dure(int heure, int minutes, int seconde) : m_heure(heure), m_miniute(minutes), m_seconde(seconde){
}

bool Dure::estEgale(Dure const& b) const {
    return (b.m_heure == m_heure && b.m_miniute == m_miniute && b.m_seconde == m_seconde);
}
Dure Dure::somme(Dure const& b) const{
    Dure res;
    res.m_heure += b.m_heure + m_heure;
    res.m_miniute +=  b.m_miniute + m_miniute;
    res.m_seconde +=  b.m_seconde + m_seconde;
    return (res);
}

bool operator==(Dure const& a,  Dure const& b)
{
    return a.estEgale(b);
}

Dure operator+(Dure const&a, Dure const& b)
{
    Dure resultat;

    resultat = a.somme(b);
     return (resultat);
}

void Dure::total() const{
    int a = m_heure + m_miniute + m_seconde;

    cout << "total : " << a << endl;
}

void Dure::afficher(ostream& flux) const
{
    flux << m_heure << "h" << m_miniute << "m" << m_seconde << "s";
}

ostream& operator<<(ostream &flux, Dure const& dure){
    dure.afficher(flux);
    return flux;
}