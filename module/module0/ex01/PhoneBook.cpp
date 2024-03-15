/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:19:01 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/15 14:16:15 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
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
    if (fname.empty() == true || lname.empty() == true || nickname.empty() == true ||  dark.empty() == true || numero.empty() == true)
    {
        cout << "Error form miss somme information : " ;
        cout << " First name : " << fname << " Last name : " << lname << " << nick name : " << nickname << " Dark secret : " << dark << endl;
        cout << endl;
        input = false;
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
