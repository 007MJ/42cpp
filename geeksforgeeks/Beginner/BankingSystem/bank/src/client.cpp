#include "../header/clients.hpp"

using std::string;

Client::Client(std::string name, std::string lastname, int age, std::string statut) 
: c_name(name), c_lastname(lastname), c_age(age), c_statut(statut)
{}

Client::~Client(){}

void Client::print_info(void)
{
    std::cout << "========  info Client =========="<< std::endl;
    std::cout << "First name : " << this->c_name << std::endl;
    std::cout << "Last name  : " << this->c_lastname << std::endl;
    std::cout << "Age        : " << this->c_age << std::endl;
    std::cout << "status     : " << this->c_statut << std::endl;
}
string Client::getName(){
      return (c_name);
}

void Client::setName(std::string name){
    c_name = name;
}
int Client::getAge(){
    return (c_age);
 }
void Client::setAge(int age){
            c_age = age;
}