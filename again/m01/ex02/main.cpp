#include <iostream>

int main(void)
{
    std::string varBrain( "HI THIS IS BRAIN");
    std::string *stringPTR = &varBrain;
    std::string &stringREF =  varBrain;
    std::cout << "Waht the programme should print" << std::endl;
    std:: cout << " L’adresse de la string en mémoire. : "<< &varBrain << std::endl;
    std:: cout << " L’adresse stockée dans stringPTR   : " << &stringPTR << std::endl;
    std:: cout << " L’adresse stockée dans stringREF   : " << &stringREF << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std:: cout << " L’La valeur de la string.           : "<< varBrain << std::endl;
    std:: cout << " La valeur pointée par stringPTR     : "<< stringPTR << std::endl;
    std:: cout << " La valeur pointée par stringREF     : "<< stringREF << std::endl;
}