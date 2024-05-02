#include "../header/comptes.hpp"

Comptes::Comptes(int rising , std::string name, std::string lastname, int age , std::string status)
: Client(name, lastname, age, status), cm_dollars(rising), cm_depense(0) 
{}

Comptes::~Comptes(){}

void Comptes::setDollars(int dollars) {
    cm_dollars = dollars;
}

int Comptes::getDollars() const {
    return (cm_dollars);
}

void    Comptes::setDepense(int dollars){
    cm_depense = dollars;
}
int Comptes::getDpense() const{
    return (cm_depense);
}

void Comptes::print_comptes() const {
    std::cout << " =====  money on the account ===== " << std::endl;
    std::cout << " Dollars : " << cm_dollars << std::endl;
    std::cout << " Depense : " << cm_depense << std::endl;
}

void Comptes::deposit(int money) {
    cm_dollars += money;
}

void Comptes::withdrawal(int money)
{
    cm_dollars -= money;
}
void    Comptes::transfer(int money, Comptes &other){
    other.deposit(money);
    this->setDepense(money);
}