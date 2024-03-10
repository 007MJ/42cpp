/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:08:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/10 18:08:30 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include "PhoneBook.Class.hpp"

class Contact {
    public:
    //default
    Contact();
    // Contact(std::string fname, std::string lname, std::string nickname, int numero);
    ~Contact();

    void    formProfil(std::string fname, std::string lname, std::string nickname, std::string dart, int numero);
    void    showContact(Contact const profil);

    private:
    int         m_numero;
    std::string m_fname;
    std::string m_lname;
    std::string m_nickname;
    std::string m_dark;
};

#endif