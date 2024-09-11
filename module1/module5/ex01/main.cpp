#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
    Bureaucrat james("James", -111);
    Form gove("Service secret", 4, 4);
    gove.beSigned(james);
    std::cout << "is signed "<< gove.getIsSigned() << std::endl;
    james.signForm(gove);
    std::cout << james << std::endl;

    std::cout << "==============================================" << std::endl;

    Bureaucrat peter("Peter", 3);
    Form dev("cpp", 4, 1);
    dev.beSigned(peter);
    std::cout << "is signed "<< dev.getIsSigned() << std::endl;
    peter.signForm(dev);
    std::cout << peter << std::endl;
}