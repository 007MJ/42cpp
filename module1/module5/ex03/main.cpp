#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "intern.hpp"

int main(void){

    // {
    //     Bureaucrat maxWeber("Max Weber", 1);
    //     PresidentialPardonForm USA("USA");
    //     USA.beSigned(maxWeber);
    //     USA.execute(maxWeber);
    //     std::cout << USA << std::endl;
    // }
    // std::cout << "===================================================" << std::endl;
    // {
    //     Bureaucrat maxWeber("Max Weber", 12);
    //     PresidentialPardonForm USA("USA");
    //     USA.beSigned(maxWeber);
    //     USA.execute(maxWeber);
    //     std::cout << USA << std::endl;
    //     std::cout << "===================================================" << std::endl;
    // }
    // {
    //     Bureaucrat Joker("Joker", 60);
    //     RobotomyRequestForm choopi("choopi");
    //     choopi.beSigned(Joker);
    //     choopi.execute(Joker);
    // }
    //     std::cout << "===================================================" << std::endl;
    // {
    //     Bureaucrat Joker("Joker", 78);
    //     RobotomyRequestForm choopi("choopi");
    //     choopi.beSigned(Joker);
    //     choopi.execute(Joker);
    // }
    // {
    //     Bureaucrat johnnydepp("deep", 3);
    //     ShrubberyCreationForm greenhouse ("greenhouse");
    //     greenhouse.beSigned(johnnydepp);
    //     greenhouse.execute(johnnydepp);
    // }
    {
        Bureaucrat johnnydepp("deep", 1);
        Intern someRandomIntern;
        AForm* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            rrf->beSigned(johnnydepp);
            rrf->execute(johnnydepp);
            delete rrf;
        }else
            std::cout << "NULL" << std::endl;
    }

}