/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:08:08 by mnshimiy          #+#    #+#             */
/*   Updated: 2024/03/15 13:43:53 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>


class Contact {
    public:
    //default
    Contact();
    // Contact(std::string fname, std::string lname, std::string nickname, int numero);
    ~Contact();

    void    formProfil(std::string fname, std::string lname, std::string nickname, std::string dart, std::string numero);
    void    showContact(Contact const& profil);
    void    profil(int index);

    private:
    std::string m_numero;
    std::string m_fname;
    std::string m_lname;
    std::string m_nickname;
    std::string m_dark;
};

#endif