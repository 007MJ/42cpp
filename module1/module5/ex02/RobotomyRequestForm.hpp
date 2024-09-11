#include "AForm.hpp"


 class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm(const std::string arget);
        ~RobotomyRequestForm();

        virtual void execute(Bureaucrat const & executor);
 };