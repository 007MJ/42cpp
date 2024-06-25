#ifndef HARL_HPP
#define HARL_HPP
#include <string>


class Harl
{
    public:
       void complain( std::string level );
       void(Harl::*ftpointer[4])(void);

    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif