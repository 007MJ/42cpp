#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm(const std::string arget);
        ~ShrubberyCreationForm();
        
        virtual void execute(Bureaucrat const & executor);
};