#include "Bureaucrat.hpp"

int main(void){
    {
        try
        {
            Bureaucrat b("James", 150);
            Bureaucrat k("James", 1);
            std::cout<< "function geGrade : " << k.getGrade() << std::endl;
            std::cout<< "function getname : " << k.getName() << std::endl;
            std::cout << "lose grade function : " <<  std::endl;
            k.decrement(2);
            std::cout<< "function getGrade : " << b.getGrade() << std::endl;
            std::cout << "Gain grade function : " <<  std::endl;
            b.increment(50);
            std::cout<< "new getGrade : " << b.getGrade() << std::endl;
            std::cout << b << std::endl;
        }
        catch(Bureaucrat::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
        }catch(Bureaucrat::GradeTooLowException &e){
            std::cout <<  e.what() << std::endl;
        }catch(Bureaucrat::GradeExceed &e){
            std::cout << e.what() << std::endl;
        }

    }

    // {

    //     try
    //     {
    //         Bureaucrat k("James", 1);
    //         std::cout<< "function getGrade : " << k.getGrade() << std::endl;
    //         std::cout<< "function getname : " << k.getName() << std::endl;
    //         std::cout << "lose grade function : " <<  std::endl;
    //         k.decrement(2);
    //         std::cout<< "new getGrade : " << k.getGrade() << std::endl;
    //         std::cout << k << std::endl;
    //         Bureaucrat b("James", 100);
    //         std::cout<< "getname : " << b.getName() << std::endl;
    //         std::cout<< "function getGrade : " << b.getGrade() << std::endl;
    //         std::cout << "Gain grade function : " <<  std::endl;
    //         b.increment(50);
    //         std::cout<< " new getGrade : " << b.getGrade() << std::endl;
    //         std::cout << b << std::endl;
    //     }
    //     catch(Bureaucrat::GradeTooHighException &e){
    //         std::cout << e.what() << std::endl;
    //     }catch(Bureaucrat::GradeTooLowException &e){
    //         std::cout <<  e.what() << std::endl;
    //     }catch(Bureaucrat::GradeExceed &e){
    //         std::cout << e.what() << std::endl;
    //     }
    // }
}