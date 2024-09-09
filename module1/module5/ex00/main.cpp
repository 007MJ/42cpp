#include "Bureaucrat.hpp"

int main(void){
    Bureaucrat b("James", 156);
    Bureaucrat k("James", -1);
    std::cout<< "function getrade : " << k.getGrade() << std::endl;
    std::cout<< "function getname : " << k.getName() << std::endl;
    std::cout << "lose grade function : " <<  std::endl;
    b.decrement(2);
    std::cout<< "function getGrade : " << b.getGrade() << std::endl;
    std::cout << "win grade function : " <<  std::endl;
    b.increment(50);
    std::cout<< "function getGrade : " << b.getGrade() << std::endl;
    std::cout << b << std::endl;
}