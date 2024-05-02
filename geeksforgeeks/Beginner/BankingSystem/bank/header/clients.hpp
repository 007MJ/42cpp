#ifndef CLIENTS_HPP
#define CLIENTS_HPP

#include <string.h>
#include <iostream>


class Client
{
   protected:
        std::string c_name;
        std::string c_lastname;
        int c_age;
        std::string c_statut;

    public:
        Client(std::string name, std:: string lastname, int age, std::string status);
        ~Client();
        void setName(std::string name);
        std::string getName();
        void setAge(int age);
        int getAge();
        void print_info();
};

#endif