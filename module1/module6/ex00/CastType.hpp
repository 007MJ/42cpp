#include <iostream>
#include <string>


class Casttype {
    private:
        const char * number;
        double nb;
        Casttype& operator=(Casttype &copy);
        bool isPseudo;
        Casttype(Casttype &copy);
        bool isnone;
        Casttype();

    public:
        Casttype(const char  *p_number);
        ~Casttype();
        bool findDouble();
        bool findFloat();
        bool onlydigit();
        bool oneChar();
        bool isNumber();
        void printliterals();
};

