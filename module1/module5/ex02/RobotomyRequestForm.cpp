#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string name): AForm(name,72, 45){
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("form x", 72, 45){}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &cope){
    this->setIsSigned(cope.getIsSigned());
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getCanSigned(), copy.getExecute()){
}


RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const & executor){

    int tmp = -1;
  if (this->getIsSigned())
    {
        srand(time(NULL));
        if (executor.getGrade() <= this->getExecute())
        {
            tmp = rand() % 2;
            if (tmp == 1){
                std::cout << "Vrrrrrrrrrrr\nBzzzzzzzzz\nVrrrrrrt-vrrrrrt\nBrrrrrrrrr" << std::endl;
                std::cout << "Ensuite, informe que la <target> a été robotomisée avec succès 50% du temps" << std::endl;
            }
            else
                std::cout << "l’opération a échoué "<< std::endl;
        }else{
            throw RobotomyRequestForm::GradeExecute();
        }

    }else
        std::cout << "The Form is not signed " << std::endl;
}
