#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string name): AForm(name,72, 45){

}

RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const & executor){

    int tmp = -1;
    int n = 1;
  if (this->getIsSigned())
    {
        try {
            if (executor.getGrade() <= this->getExecute())
            {
                tmp = rand() % n;
                if (tmp == 1)
                    std::cout << "Vrrrrrrrrrrr\nBzzzzzzzzz\nVrrrrrrt-vrrrrrt\nBrrrrrrrrr" << std::endl;
                else
                    std::cout << "l’opération a échoué "<< std::endl;
            }else{
                throw RobotomyRequestForm::GradeTooHighException();
            }
        }catch(RobotomyRequestForm::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
        }
    }else
        std::cout << "The Form is not signed " << std::endl;
}
