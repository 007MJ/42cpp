#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "Contact.Class.hpp"


class PhoneBook {

    public:
    // default
    PhoneBook();
    ~PhoneBook();

    bool    is_full();
    void    addProfil(std::string fname, std::string lname, std::string nickname, int numero, int index_p);
    void    showProfil(int index_p);

    // methode
    private:
    Contact m_profil[10];
};

#endif 