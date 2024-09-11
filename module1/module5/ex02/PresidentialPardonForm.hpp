#include "AForm.hpp"

class PresidentialPardonForm :public AForm {
    public:
        PresidentialPardonForm(const std::string arget);
        PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm &copy);
        PresidentialPardonForm(PresidentialPardonForm &copy);
        ~PresidentialPardonForm();

        virtual void execute(Bureaucrat const & executor);
};