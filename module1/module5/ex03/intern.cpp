#include "intern.hpp"

typedef AForm (*FormFunction)(std::string cible);

static AForm * _shrubberyF(std::string name){return ( new ShrubberyCreationForm(name));}

static  AForm * _Robotomy(std::string name){return  new RobotomyRequestForm(name);}
static  AForm * _PresidentialPardon(std::string name){return new PresidentialPardonForm(name);}

Intern::Intern(){}


Intern::~Intern(){}

AForm *Intern::makeForm(std::string name, std::string cible)
{
   std::string name_arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    // this->arr_aform[this->nameForm[0]] = new ShrubberyCreationForm(cible);
    // this->arr_aform[this->nameForm[1]] = new RobotomyRequestForm(cible);
    // this->arr_aform[this->nameForm[2]] = new PresidentialPardonForm(cible);

    // AForm*(Intern::*create[4])(std::string name) = {&Intern::ShrubberyCreationForm(cible), };
    // AForm* ((Intern::*funcarr[]))() = {&Intern::_ShrubberyCreation} ;

    AForm*(*FormFunction[])(std::string name) = {_shrubberyF, _Robotomy, _PresidentialPardon};

    for (int i = 0; i < 3; i++)
    {
        std::cout << " search .. ."  << std::endl;
        if (name == name_arr[i])  
        {
            std::cout << " find .. ."  << std::endl;
            return FormFunction[i](cible);
        }
    }
    std::cout << " NULL.. ."  << std::endl;
    return (NULL);
}

