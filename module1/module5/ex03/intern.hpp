#ifndef INTERN_HPP
#define INTERN_HPP
#include <map>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

    class Intern{
        private:
            Intern(Intern &ob);
            Intern& operator=(const Intern &ob);
            std::map<std::string, AForm *> arr_aform; 
            std::string nameForm[3];
        public:
            AForm   *makeForm(std::string name, std::string cible);
            // ShrubberyCreationForm  _ShrubberyCreation();
            // RobotomyRequestForm    RobotomyRequestForm(std::string cible);
            // PresidentialPardonForm PresidentialPardonForm(std::string cible);
            // AForm*(Intern::*create[4])(std::string name); 

            Intern();
            ~Intern();
    };
#endif