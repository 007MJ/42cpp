#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void){
    {
     std::cout << "=======================test 1============================" << std::endl;
    {
        try{

            Bureaucrat maxWeber("Max Weber", 12);
            PresidentialPardonForm USA("USA");
            USA.beSigned(maxWeber);
            USA.execute(maxWeber);
            std::cout << USA << std::endl;
        }catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(PresidentialPardonForm::GradeCant& e){
            std::cout << e.what() << std::endl;;
        } 
        catch(PresidentialPardonForm::GradeExecute &e){
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "=======================test 2============================" << std::endl;
    {
        try{

        Bureaucrat Joker("Joker", 60);
        RobotomyRequestForm choopi("choopi");
        choopi.beSigned(Joker);
        choopi.execute(Joker);
        }catch(RobotomyRequestForm::GradeExecute &e){
            std::cout << e.what() << std::endl;
        }
         catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(RobotomyRequestForm::GradeCant &e)
        {
            std::cout << e.what() << std::endl;
        }

    }
        std::cout << "======================= test 3============================" << std::endl;
    {
        try{
            Bureaucrat Joker("Joker", 78);
            Intern someRandomIntern;
            AForm* rrf;

            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            if (rrf)
            {
                rrf->beSigned(Joker);
                rrf->execute(Joker);
                delete rrf;
            }else
                std::cout << "NULL" << std::endl;
            }
            catch(Bureaucrat::GradeTooHighException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(Bureaucrat::GradeTooLowException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeCant &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeTooHighException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeTooLowException &e)
            {
                std::cout << e.what() << std::endl;
            }
    }
    std::cout << "======================= test 4============================" << std::endl;
    {
        try{
            Bureaucrat johnnydepp("deep", 3);
            Intern someRandomIntern;
            AForm* rrf;

            rrf = someRandomIntern.makeForm("shrubbery Preation", "Bender");
            if (rrf)
            {
                rrf->beSigned(johnnydepp);
                rrf->execute(johnnydepp);
                delete rrf;
            }else
                std::cout << "NULL" << std::endl;
            }
            catch(Bureaucrat::GradeTooHighException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(Bureaucrat::GradeTooLowException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeCant &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeTooHighException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeTooLowException &e)
            {
                std::cout << e.what() << std::endl;
            }
        
    }
    std::cout << "======================= test 5============================" << std::endl;
    {
        try
        {
            Bureaucrat johnnydepp("deep", 150);
            Intern someRandomIntern;
            AForm* rrf;

            rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
            if (rrf)
            {
                rrf->beSigned(johnnydepp);
                rrf->execute(johnnydepp);
                delete rrf;
            }else
                std::cout << "NULL" << std::endl;
            }
            catch(Bureaucrat::GradeTooHighException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(Bureaucrat::GradeTooLowException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeCant &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeTooHighException &e)
            {
                std::cout << e.what() << std::endl;
            }
            catch(AForm::GradeTooLowException &e)
            {
                std::cout << e.what() << std::endl;
            }
    }

    std::cout << "======================= test 6============================" << std::endl;
    {

      try 
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
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(AForm::GradeCant &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(AForm::GradeTooHighException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch(AForm::GradeTooLowException &e)
        {
            std::cout << e.what() << std::endl;
        }
    }  
    }
}