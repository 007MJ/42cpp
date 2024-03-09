#ifndef DURE_HPP
#define DURE_HPP
#include <iostream>

using namespace std;

class Dure{

    public :

    Dure(int heure = 0, int minutes = 0, int seconde = 0);
    bool estEgale(Dure const& b)const;
    Dure somme(Dure const& b) const;
    void afficher(std::ostream& flux) const;
    void  total() const;

    private:
    
    int m_heure;
    int m_miniute;
    int m_seconde;
};

bool  operator==(Dure const &a, Dure const &b);
Dure operator+(Dure const& a, Dure const &b);

ostream& operator<<(ostream &flux, Dure const& dure);

#endif 