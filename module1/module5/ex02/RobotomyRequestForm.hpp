#include "AForm.hpp"


 class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm(const std::string arget);
        ~RobotomyRequestForm();
        RobotomyRequestForm();
         RobotomyRequestForm & operator=( RobotomyRequestForm &copy);
         RobotomyRequestForm(RobotomyRequestForm &copy);

        virtual void execute(Bureaucrat const & executor);
 };