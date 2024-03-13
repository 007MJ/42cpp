/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:19:01 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/13 17:15:48 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"
#include <iomanip>
#include "string"

using std::cout;
using std::endl;
using std::string;

PhoneBook::PhoneBook()
{
    m_index_p = 0;
    cout << "| iphone x : low battery |" << endl;
}
PhoneBook::~PhoneBook(){

}

void PhoneBook::addProfil(string fname, string lname, string nickname, string dart, string numero, int index_p)
{
    m_profil[index_p].formProfil(fname, lname, nickname, dart, numero);
}

void    PhoneBook::showProfil(int index_p)
{
    m_profil[index_p].showContact(m_profil[index_p]);
}
void    PhoneBook::profilHave(int index)
{
    m_profil[index].profil(index);
}

bool PhoneBook::correctInput(string fname, string lname, string nickname, string dark, string numero)
{
    bool input = true;
    if (fname.empty() && lname.empty() && nickname.empty() &&  dark.empty()  &&  numero.empty())
    {
        cout << "Error form miss somme information : " ;
        cout << " First name : " << fname << " Last name : " << lname << " << nick name : " << nickname << " Dark secret : " << dark << endl;
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
// contact 
Contact::Contact(){
}


Contact::~Contact(){
}


string lenword(string word)
{
    if (word.length() > 10)
    {
        string newStr = word.substr(0, 9);
        newStr += '.';
        return (newStr);
    }
    return (word);
}
void    Contact::showContact(Contact const& profil)
{
    cout << "First  name    " << profil.m_fname << endl;
    cout << "Last   name    " << profil.m_lname << endl;
    cout << "Nick   name    " << profil.m_nickname << endl;
    cout << "Dart   Secret  " << profil.m_dark << endl;
    cout << "Numbero        " << profil.m_numero << endl;
}
void  Contact::profil(int index)
{
    if (index > -1)
    {
        string newFname = lenword(m_fname);
        string newLname = lenword(m_lname);
        string newNname = lenword(m_nickname);
        cout <<"|"<< std::setw(10) << index;
        cout <<"|"<< std::setw(10) << newFname;
        cout <<"|"<< std::setw(10) << newLname;
        cout <<"|"<< std::setw(10) << newNname;
        cout <<"|"<< endl;
    }
}
void    Contact::formProfil(string fname, string lname, string nickname, string dark, string numero)
{
    m_fname = fname;
    m_lname = lname;
    m_nickname = nickname;
    m_numero = numero;
    m_dark = dark;
}
