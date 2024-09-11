#include "AForm.hpp"

class PresidentialPardonForm :public AForm {
    public:
        PresidentialPardonForm(const std::string arget);
        ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor);
};