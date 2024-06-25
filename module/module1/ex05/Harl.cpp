#include "Harl.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

std::string uperCase(std::string level)
{
    string newLevel;
    for (unsigned int i = 0; i < level.length(); i++){
        newLevel += (char )toupper(level[i]);
    }
    return (newLevel);
}

void Harl::complain(string level){

    std::string uppperLevel = uperCase(level);

    ftpointer[0] = &Harl::debug;
    ftpointer[1] = &Harl::error;
    ftpointer[2] = &Harl::warning;
    ftpointer[3] = &Harl::info;
    if (uppperLevel.empty() == false)
    {
        std::string arraystring[4] = {
            "DEBUG",
            "ERROR",
            "WARGNING",
            "INFO"
        };

        for (int i = 0; i < 4; i++){

            if (uppperLevel == arraystring[i])
            {
                (this->*ftpointer[i])();
                return ;
            }
        }
    }
}

void Harl::debug(){

    cout << "level : debug !" << endl;
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup";
    cout << " burger. I really do !" << endl;
}
void Harl::info(void){
    cout << " level : info !" << endl;
    cout << " cannot believe adding extra bacon costs more money. You didn’t put";
    cout << " enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
}

void Harl::warning(void){
    cout << "level : warning !" << endl;
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
    cout << "for years whereas you started working here since last month." << endl;
}

void Harl::error(void){
    cout << "level : error !" << endl;
    cout << "This is unacceptable ! I want to speak to the manager now." << endl;
}
