#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Contact.Class.hpp"

#define ADD     0
#define SEARCH  1
#define EXIT    2
#define ERROR   3

class PhoneBook {

    public:
    // default
    PhoneBook();
    ~PhoneBook();

    bool    isFull();
    void    addProfil(std::string fname, std::string lname, std::string nickname, std::string dart, int numero, int index_p);
    void    showProfil(int index_p);
    bool    correctInput(std::string fname, std::string lname, std::string nickname, std::string dart, std::string numero);

    // methode
    private:
    Contact m_profil[8];
    int     m_index_p;
};


#endif 