#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;


int main(void)
{
    string typestring = "HI THIS IS BRAIN";

    string *stringPTR = &typestring;

    string &stringREF = typestring;

    cout << "L’adresse de la string en mémoire  " << &typestring << endl;
    cout << "L’adresse stockée dans stringPTR   " << &stringPTR << endl;
    cout << "L’adresse stockée dans stringREF   " << &stringREF << endl;
    cout << "\n";
    cout << "La valeur de la string          " << typestring << endl;
    cout << "La valeur pointée par stringPTR " << stringPTR << endl;
    cout << "La valeur pointée par stringREF " << stringREF << endl;
}