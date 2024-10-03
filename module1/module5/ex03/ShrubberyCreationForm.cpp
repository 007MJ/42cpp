#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, 145, 37){

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor){
     if (this->getIsSigned())
    {
        try {

            if (executor.getGrade() <= this->getExecute())
            {
                std::string nameFile;
                nameFile = this->getName() + "_shrubbery";
                std::ofstream form(nameFile,  std::ios::trunc);
                if (form.is_open())
                {
                    for (int i = 0; i < 3; i++)
                    {
                        form << "       _-_ "<<std::endl;
                        form << "    /~~   ~~ \\ "<<std::endl;
                        form << " /~~         ~~ \\ "<<std::endl;;
                        form << "{               } "<<std::endl;
                        form << " \\  _-     -_  / "<<std::endl;
                        form << "   ~  \\ //  ~ "<<std::endl;
                        form << "_- -   | | _ - _ "<<std::endl;
                        form << "  _ -  | |   -_ "<<std::endl;
                        form << "      // \\   " << std::endl;
                        form << "  ||        ||" << std::endl;
                        form << "  ||        ||" << std::endl;
                        form << "  ============" << std::endl;
                    }
                    form.close();
                }else
                    std::cout<< "can't open the file" << std::endl;
            }else{
                throw ShrubberyCreationForm::GradeExecute();
            }
        }catch(ShrubberyCreationForm::GradeExecute &e){
            std::cout << e.what() << std::endl;
        }
    }else
        std::cout << "The Form is not signed " << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("form x", 145, 37){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &cope){
    this->setIsSigned(cope.getIsSigned());
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getCanSigned(), copy.getExecute()){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}