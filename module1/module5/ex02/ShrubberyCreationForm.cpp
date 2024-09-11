#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, 145, 37){

}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor){
     if (this->getIsSigned())
    {
        try {

            if (executor.getGrade() <= this->getExecute())
            {
                std::string nameFile;

                nameFile = this->getName() + "_shrubbery";
                std::ofstream form;
                form.open(nameFile, std::fstream::app | std::fstream::trunc);
                for (int i = 0; i < 3; i++)
                {
                    form << "       _-_ ";
                    form << "    /~~   ~~ \\ ";
                    form << " /~~         ~~ \\ ";
                    form << "{               } ";
                    form << " \\  _-     -_  / ";
                    form << "   ~  \\ //  ~ ";
                    form << "_- -   | | _- _ ";
                    form << "  _ -  | |   -_ ";
                    form << "    // \\ ";
                }
            }else{
                throw ShrubberyCreationForm::GradeTooHighException();
            }
        }catch(ShrubberyCreationForm::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
        }
    }else
        std::cout << "The Form is not signed " << std::endl;

}