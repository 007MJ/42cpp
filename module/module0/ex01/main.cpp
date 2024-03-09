/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:15:29 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/09 14:41:07 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

using namespace std;

int main()
{
    PhoneBook you;

    //ajouter
    you.addProfil("fname", "lname", "nick", 585123132, 1);
    //search
    you.showProfil(1);
    
}