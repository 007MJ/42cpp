/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:15:29 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/15 17:44:13 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;
using std::getline;

int isInputCorrect(string input)
{
    char newInput[input.length()];
   
    for ( unsigned long i = 0; i <= input.length(); i++)
        newInput[i] = toupper(input[i]);
    input = newInput;
    if (input == "ADD")
        return (ADD);
    else if (input == "SEARCH")
        return (SEARCH);
    else if (input == "EXIT")
        return (EXIT);
    else 
    {
        cout << "Command not found : " << input << endl;           
        return (input.erase(), ERROR);    
    }
}
bool isNumber(std::string idStr)
{
       for (unsigned long i = 0; i < idStr.length(); i++)
        {
            if (isdigit(idStr[i]) == 0)
            {
                return (false);
            }
         }
        return (true);
}

int manageError(int i)
{
    int idInt = 0;
    string idStr;
    if ( i == 0)
    {
        cout << "No index " << i << endl;  
        return -1;
    }
    while (true)
    {
        cout << "Enter a index : ";
        std::getline (std::cin,idStr);
        if (isNumber(idStr) == false)
        {
            cout << "only digit" << endl;
            continue;
        }
        if (idStr.empty())
            continue;
        std::stringstream ss(idStr);
        ss >> idInt;
        if (ss.fail())
            continue;
        if (idInt > 7)
            continue;
        break;
    }
    return (idInt);
}
void    search_profil(int p, PhoneBook you)
{
    cout << "|==========|==========|==========|==========|" << endl;
    cout << "|" << std::setw(10) << "Index";
    cout << "|" << std::setw(10) << "First name";
    cout << "|" << std::setw(10) << "Last name";
    cout << "|" << std::setw(10) << "Nick name";
    cout << "|" << endl;
    int j = 0;
    while (j < p)
    {
        you.profilHave(j);
        j++;
    }          
    cout<<"|===========================================|" << endl;
    cout <<"\n";
    int id = manageError(p);
    if (id <= -1)
        return ;
    if (id > p - 1)
        cout << "there is no profile with that id : " << id << endl;
    else
    {
        cout <<"\n";
        you.showProfil(id);
        cout <<"\n";
    }
}

int main()
{
    PhoneBook you;
    string input;
    int run = 1;
    int i,  p;
    int cmd;
    i = 0;
    p = 0;
    while (run == 1 && std::cin.good())
    {
        cout << "YOU HAVE THREE COMMAND : ADD, SEARCH, EXIT" << endl;
        cout << "Enter Command :";
        std::getline (std::cin, input);
        cmd = isInputCorrect(input);
        if (cmd == ADD)
        {
            string fname, lname, nickname, dark, numero;
            cout << "Enter fisrt name    : ";
            std::getline (std::cin, fname);
            cout << "Enter last name     : ";
            std::getline (std::cin, lname);
            cout << "Enter dart secret   : ";
            std::getline (std::cin, dark);
            cout << "Enter nickname      : ";
            std::getline (std::cin, nickname);
            cout << "Enter Number        : ";
            std::getline (std::cin, numero);
            if (you.correctInput(fname, lname, nickname, dark, numero) == true){
                if (i < 8)
                {
                    you.addProfil(fname, lname, nickname, dark, numero, i);
                    i++;
                    if (p < 8)
                        p++;
                }else
                {
                    i = 0;
                    you.addProfil(fname, lname, nickname, dark, numero, i);
                    i++;
                }
            }
        }
        else if  (cmd == SEARCH)
        {
            search_profil(p, you);
        }
        else if (cmd == EXIT)
            run = -1;
    }
}