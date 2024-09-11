#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : AForm(name, 25, 5){   
}

PresidentialPardonForm::~PresidentialPardonForm(){}



void PresidentialPardonForm::execute(Bureaucrat const & executor){
     if (this->getIsSigned())
    {
        try {

            if (executor.getGrade() <= this->getExecute())
            {
              std::cout << "Informe que la " << this->getName() << " a été pardonnée par Zaphod Beeblebrox" << std::endl;   
            }else{
                throw AForm::GradeTooHighException();
            }
        }catch(AForm::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
        }
    }else
        std::cout << "The Form is not signed " << std::endl;

}