#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
    {
        try
        {

            Bureaucrat james("James", 11);
            Form gove("Service secret", 4, 4);
            gove.beSigned(james);
            std::cout << "is signed "<< gove.getIsSigned() << std::endl;
            james.signForm(gove);
            std::cout << james << std::endl;
        }catch(Form::GradeTooHighException &e){
            std::cerr << e.what() << '\n';
        }
        catch(Form::GradeTooLowException &e){
            std::cerr << e.what() << '\n';
        }catch(Bureaucrat::GradeTooHighException &e){
            std::cerr << e.what() << '\n';
        }
        catch(Bureaucrat::GradeTooLowException &e){
            std::cerr << e.what() << '\n';
        }
    }
        std::cout << "second test" << std::endl;
    {
        try
        {

            Bureaucrat tim("Tim", 3);
            Form dev("cpp", 4, 2);
            dev.beSigned(tim);
            std::cout << "is signed "<< dev.getIsSigned() << std::endl;
            tim.signForm(dev);
            std::cout << tim << std::endl;
        }catch(Form::GradeTooHighException &e){
            std::cerr << e.what() << '\n';
        }
        catch(Form::GradeTooLowException &e){
            std::cerr << e.what() << '\n';
        }catch(Bureaucrat::GradeTooHighException &e){
            std::cerr << e.what() << '\n';
        }
        catch(Bureaucrat::GradeTooLowException &e){
            std::cerr << e.what() << '\n';
        }
    }
        
}