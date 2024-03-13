#include "Harl.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

void Harl::complain(string level){
    if (level == "DEBUG")
        debug();
    if (level == "INFO")
        info();
    if (level == "WARNING")
        warning();
    if (level == "ERROR")
        error();
}

void Harl::debug(){
        cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup";
        cout << " burger. I really do !" << endl;
}
void Harl::info(void){
    cout << " cannot believe adding extra bacon costs more money. You didn’t put";
    cout << " enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
}

void Harl::warning(void){
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
    cout << "for years whereas you started working here since last month." << endl;
}

void Harl::error(void){
    cout << "This is unacceptable ! I want to speak to the manager now." << endl;
}