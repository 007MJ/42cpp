#include "Intern.hpp"

typedef AForm (*FormFunction)(std::string cible);

static AForm * _shrubberyF(std::string name){return ( new ShrubberyCreationForm(name));}

static  AForm * _Robotomy(std::string name){return  new RobotomyRequestForm(name);}
static  AForm * _PresidentialPardon(std::string name){return new PresidentialPardonForm(name);}

Intern::Intern(){}


Intern::~Intern(){}

AForm *Intern::makeForm(std::string name, std::string cible)
{
   std::string name_arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm*(*FormFunction[])(std::string name) = {_shrubberyF, _Robotomy, _PresidentialPardon};

    for (int i = 0; i < 3; i++)
    {
        if (name == name_arr[i])  
        {
            return FormFunction[i](cible);
        }
    }
    return (NULL);
}

