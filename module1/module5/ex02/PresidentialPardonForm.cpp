#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : AForm(name, 25, 5){   
}

PresidentialPardonForm::PresidentialPardonForm(): AForm("form x", 25, 5){}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &cope){
    this->setIsSigned(cope.getIsSigned());
    return (*this);
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getCanSigned(), copy.getExecute()){

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
                throw PresidentialPardonForm::GradeExecute();
            }
        }catch(PresidentialPardonForm::GradeExecute &e){
            std::cout << e.what() << std::endl;
        }
    }else
        std::cout << "The Form is not signed " << std::endl;

}