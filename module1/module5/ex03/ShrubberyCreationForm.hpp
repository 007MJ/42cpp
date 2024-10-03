#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm(const std::string arget);
        ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm &copy);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();
        
        virtual void execute(Bureaucrat const & executor);
};