#include "CastType.hpp"

Casttype::Casttype(){
    number = "none";
    this->nb = 0;
    this->isPseudo = false;
    this->isnone =  true;
}

Casttype::~Casttype(){}

Casttype::Casttype(const char * p_number){
        std::string type[8] = {"-inff", "+inff", "inff", "nanf", "-inf", "+inf", "inf", "nan"};
        this->isPseudo = false;
        this->isnone = false;
        this->number = p_number;
        for (int i = 0; i < 8; i++){
            if (type[i].compare(this->number) == 0)
            {
                this->isPseudo = true;
            }
        }

        if (!this->isPseudo && !this->isnone){

            if (this->isNumber())
                this->nb = atof(this->number);
            else
                this->isnone = true;
        }
}

Casttype::Casttype(Casttype &copy){
    *this = copy;
}

Casttype& Casttype::operator=(Casttype &obj){
    this->nb = obj.nb;
    return (*this);
}

bool Casttype::oneChar(){
    if (this->isnone)
        return (false);
    if (strlen(this->number) == 1)
        if (isalpha(this->number[0]))
            return (true);
    return (false);
}

bool Casttype::onlydigit(){
    if (this->isnone)
        return (false);
    for (unsigned long i = 0; i < strlen(this->number); i++)
    {
        if (this->number[i] == '-' && i == 0)
            continue;
        if (!std::isdigit(this->number[i]))
            return (false);
    }
    return (true);
}

bool Casttype::findFloat(){
    if (this->isnone)
        return (false);
    unsigned long dot = 0;
    bool  f = false;
    for (unsigned long i = 0; i < strlen(this->number); i++)
    {
        if (this->number[i] == '-' && i == 0)
            continue;
        if (this->number[i] == '.' && std::isdigit(this->number[i + 1]))
            dot++;
        if (this->number[i] == 'f' && strlen(this->number) -1 == i && std::isdigit(this->number[i - 1]))
            f = true;
    }
    if ((f == true && dot == 1) || (dot == 0 && f == true))
        return (f);
    return (f);
}

bool Casttype::findDouble()
{
    if (this->isnone)
        return (false);
    unsigned long dot = 0;
    for (unsigned long i = 0; i < strlen(this->number); i++)
    {
        if (this->number[i] == '-' && i == 0)
            continue;
        if (this->number[i] == '.' && isdigit(this->number[i + i]))
            dot++;
    }
    if (dot == 1)
        return (true);
    return (false);
}

bool Casttype::isNumber()
{
    if (this->isnone)
        return (false);
    if (this->oneChar())
        return (true);
    if (this->findDouble())
        return (true);
    if (this->findFloat())
        return (true);
    if (this->onlydigit())
        return (true);
    return (false);
}

void Casttype::printliterals(){
    if (!this->isnone)
    {
        std::string forflaot[4] = {"-inff", "+inff", "inff", "nanf"};
        std::string fordouble[4] = {"-inf", "+inf", "inf", "nan"};
        if (this->isPseudo)
        {
            int show = 0;
            for (int i = 0; i  < 4; i++){
                if (forflaot[i].compare(this->number) == 0 || fordouble[i].compare(this->number) == 0)
                    show = i;
            }
            std::cout << "char   : impossible " << std::endl;
            std::cout << "int    : impossible " << std::endl;
            std::cout << "float  : "<< forflaot[show] << std::endl;
            std::cout << "double : " << fordouble[show] << std::endl;
        }else{
            if (isprint(static_cast<char> (this->nb)))
                std::cout << "char   : " << static_cast<char> (this->nb) << std::endl;
            else
                std::cout << "char   : Non displayable" << std::endl;
            std::cout << "int    : " << static_cast<int> (this->nb)<< std::endl;
            std::cout << "float  : " << static_cast<float> (this->nb)<< std::endl;
            std::cout << "double : " << static_cast<double> (this->nb)<<std::endl;
        }
    }else
        std::cout << "None" << std::endl;
}