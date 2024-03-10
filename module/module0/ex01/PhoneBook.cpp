/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:19:01 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/10 19:51:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

using namespace std;

PhoneBook::PhoneBook()
{
    m_index_p = 0;
    cout << "| iphone x : low battery |" << endl;
}
PhoneBook::~PhoneBook(){

}

void PhoneBook::addProfil(string fname, string lname, string nickname, string dart, int numero, int index_p)
{
    m_profil[index_p].formProfil(fname, lname, nickname, dart, numero);
    m_index_p++;
}

void    PhoneBook::showProfil(int index_p)
{
    m_profil[index_p].showContact(m_profil[index_p]);
}

// contact 
Contact::Contact(){
    
}


Contact::~Contact(){
    
}

bool PhoneBook::correctInput(string fname, string lname, string nickname, string dark, string numero)
{
    bool input = true;
    if (fname.empty() && lname.empty() && nickname.empty() &&  dark.empty()  &&  numero.empty())
    {
        cout << "Error form miss somme information : " ;
        cout << " First name : " << fname.empty() << " Last name : " << lname << " Dark secret : " << dark << endl;
        cout << endl;
        return (input);
    }
    for (unsigned long i = 0; i <  numero.length(); i++)
    {
            if (isdigit(numero[i]) == 0)
            {
                cout << "Numero has alpha : " << numero << endl;
                input = false;
                  cout << endl;
                break ;
            }
    }
    return (input);
}

void    Contact::showContact(Contact const profil)
{
    cout << "First  name    " << profil.m_fname << endl;
    cout << "Last   name    " << profil.m_lname << endl;
    cout << "Nick   name    " << profil.m_nickname << endl;
    cout << "Dart   Secret  " << profil.m_dark << endl;
    cout << "Numbero        " << profil.m_numero << endl;
}

void    Contact::formProfil(string fname, string lname, string nickname, string dark, int numero)
{
    m_fname = fname;
    m_lname = lname;
    m_nickname = nickname;
    m_numero = numero;
    m_dark = dark;
}
