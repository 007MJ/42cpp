/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:15:29 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/10 19:49:09 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"
#include <string.h>
using namespace std;

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
        cout << "Command not found :" << endl;           
        return (input.erase(), ERROR);    
    }
}

int manageError(int i)
{
    int idInt = 0;
    string idStr;
    
    cout << "Enter a index bewteen 0 and " << i << endl;  
    cout << "Enter a number : ";
    cin >> idStr;
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
            }
         }
        if (green == false)
        {
            cout << "Enter a index bewteen 0 and " << i << endl;
            cout << "Enter a number : ";
            cin >> idStr;
        }
        else
        {
            run = -1;
            idInt = stoi(idStr);
            return (idInt);
        }
    }
    return (idInt);
}
void    search_profil(int i, PhoneBook you)
{
    int id = manageError(i);
    if (id > i || i == -1)
        cout << "there is on profile with that id : " << endl;
    else
        you.showProfil(id);
}

void    form(string fname, string lname, string nickname, string dark, string numero)
{
    cout << "Enter fisrt name    : ";
    cin >> fname;
    cout << "Enter last name     : ";
    cin >> lname;
    cout << "Enter dart secret   : ";
    cin >> dark;
    cout << "Enter dart nickname : ";
    cin >> nickname;
    cout << "Enter Number        : ";
    cin >> numero;
}
int main()
{
    PhoneBook you;
    string input;
    int run = 1;
    int i, j, p;
    int cmd;
    i = -1;
    p = 0;
    j = 0;
    while (run == 1)
    {
        cout << "YOU HAVE THREE COMMAND : ADD, SEARCH, EXIT" << endl;
        cout << "Enter Command :";
        cin >> input;
        cmd = isInputCorrect(input);
        if ( cmd == ADD)
        {
            string fname, lname, nickname, dark, numero;
            form(fname, lname, nickname, dark, numero);
            if (you.correctInput(fname, lname, nickname, dark, numero) == true)
            {
                i++;
                if (i < 8)
                {
                    you.addProfil(fname, lname, nickname, dark, stoi(numero), i);
                    if (p < 9)
                        p++;
                }
                if (i > 9 && j < 9)
                {
                    you.addProfil(fname, lname, nickname, dark, stoi(numero), j);
                    j++;
                }
                else 
                {
                    i = -1;
                    j = 0;
                }
            }
        }
        if (cmd == SEARCH)
            search_profil(p, you);
        if (cmd == EXIT)
            run = -1;
    }
}