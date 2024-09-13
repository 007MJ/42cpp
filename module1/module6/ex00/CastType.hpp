#include <iostream>
#include <string>


class Casttype {
    private:
        const char * number;
        double nb;
        Casttype& operator=(Casttype &copy);
        bool isPseudo;
        bool isnone;

    public:
        Casttype(Casttype &copy);
        Casttype(const char  *p_number);
        Casttype();
        ~Casttype();
        bool findDouble();
        bool findFloat();
        bool onlydigit();
        bool oneChar();
        bool isNumber();
        void printliterals();
};

