/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:35:11 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/15 13:35:12 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include "string"

using std::cout;
using std::endl;
using std::string;

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
