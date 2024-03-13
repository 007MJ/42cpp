/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:15:29 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/13 17:40:11 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"
#include <iomanip>
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

int manageError(int i)
{
    int idInt = 0;
    string idStr;
    if ( i == 0)
    {
        cout << "No index " << i << endl;  
        return -1;
    }
    cout << "Enter a index : ";
    std::getline (std::cin,idStr);
    int run = 1;
    bool green = true;
    while (run == 1)
    {
        for (unsigned long i = 0; i < idStr.length(); i++)
        {
            if (isdigit(idStr[i]) == 0)
            {
                cout << "only digit " << endl;
                green = false;
                break;
            }
         }
        if (green == false)
        {
            cout << "Enter a number : ";
            std::getline (std::cin,idStr);
            green = true;
        }
        else
        {
            run = -1;
            idInt = stoi(idStr);
            return (idInt);
        }
        idStr.erase();
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
        you.profilHave(j + 1);
        j++;
    }          
    cout<<"|===========================================|" << endl;
    cout <<"\n";
    int id = manageError(p);
    if (id == -1)
        return ;
    if (id > p)
        cout << "there is no profile with that id : " << id << endl;
    else
    {
        cout <<"\n";
        you.showProfil(id);
        cout <<"\n";
    }
}
void freestring(std::string fname, std:: string lname, std::string nickname, std::string dark, std::string numero){
    if (fname.empty() == false)
        fname.erase();
    if (lname.empty() == false)
        lname.erase();
    if (nickname.empty() == false)
        nickname.erase();
    if (numero.empty() == false)
        nickname.erase();
    if (dark.empty() == false)
        dark.erase();
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
    while (run == 1)
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
            if (you.correctInput(fname, lname, nickname, dark, numero) == true)
            {
                if (i >= 0 && i <= 1)
                {
                    i++;
                    if (p <= 2)
                        p++;
                    you.addProfil(fname, lname, nickname, dark, numero, i);
                }else
                {
                    i = 1;
                    you.addProfil(fname, lname, nickname, dark, numero, i);
                }
            }
            freestring(fname, lname, nickname, dark, numero);
        }
        if (cmd == SEARCH)
        {
            search_profil(p, you);
        }
        if (cmd == EXIT)
            run = -1;
        input.erase();
    }
}