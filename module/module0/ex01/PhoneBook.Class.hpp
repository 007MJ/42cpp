#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "Contact.Class.hpp"


class PhoneBook {

    public:
    // default
    PhoneBook();
    ~PhoneBook();

    bool    isFull();
    void    addProfil(std::string fname, std::string lname, std::string nickname, int numero, int index_p);
    void    showProfil(int index_p);
    bool    CorrectInput(std::string fname, std::string lname, std::string nickname, int numero);

    // methode
    private:
    Contact m_profil[8];
    int     m_index_p;
};

#endif 