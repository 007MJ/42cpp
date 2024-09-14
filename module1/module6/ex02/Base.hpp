#include <iostream>

class Base {
    private:
        int random;
    public:
        Base();
        virtual ~Base();
        Base * generate(void);
        void identify(Base* p);
};