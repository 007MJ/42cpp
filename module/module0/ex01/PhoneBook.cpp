/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:19:01 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/09 12:12:36 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

using namespace std;

PhoneBook::PhoneBook()
{
    cout << "| iphone x : low battery |" << endl;
}
PhoneBook::~PhoneBook(){

}

void PhoneBook::addProfil(string fname, string lname, string nickname, int numero, int index_p)
{
    m_profil[index_p].formProfil(fname, lname, nickname, numero);
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

void    Contact::showContact(Contact const& profil)
{
    cout << "First name " << profil.m_fname << endl;
    cout << "Last name  " << profil.m_lname << endl;
    cout << "Nickname   " << profil.m_nickname << endl;
    cout << "Numbero    " << profil.m_numero << endl;
}

bool    Contact::formProfil(string fname, string lname, string nname, int numero)
{
    m_fname = fname;
    m_lname = lname;
    m_nickname = nname;
    m_numero = numero;
}
