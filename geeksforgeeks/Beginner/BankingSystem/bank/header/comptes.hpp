#ifndef COMPTES_HPP
#define COMPTES_HPP
#include "clients.hpp"

class Comptes : Client
{
    private:
        int cm_dollars;
        int cm_depense;

    public:
        Comptes(int rising , std::string name, std::string lastname, int age, std::string status);
        ~Comptes();
        void setDollars(int dollars);
        int getDollars() const;
        void setDepense(int dollars);
        int getDpense() const ;
        void print_comptes() const;
        void deposit(int money);
        void withdrawal(int money);
        void transfer(int money, Comptes &other);
        void history();

};

#endif