#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define ADD     0
#define SEARCH  1
#define EXIT    2
#define ERROR   3


class PhoneBook {

    public:
    PhoneBook();
    ~PhoneBook();

    void    addProfil(std::string fname, std::string lname, std::string nickname, std::string dart, std::string numero, int index_p);
    void    showProfil(int index_p);
    void    profilHave(int index);
    bool    correctInput(std::string fname, std::string lname, std::string nickname, std::string dart, std::string numero);

    private:
    Contact m_profil[8];
    int     m_index_p;
};


#endif 