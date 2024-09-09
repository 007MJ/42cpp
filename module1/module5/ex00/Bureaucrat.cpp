#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}


Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade){
    try{
        if (this->_grade > 150)
            throw Bureaucrat::GradeTooHighException();
        if (this->_grade < 1)
            throw Bureaucrat::GradeTooLowException();
    }catch(Bureaucrat::GradeTooHighException &e){
        this->_grade = 0;
        std::cout << e.what() << std::endl;
        return;
    }catch(Bureaucrat::GradeTooLowException &e){
        this->_grade = 0;
        std::cout <<  e.what() << std::endl;
        return;
    }
}

int Bureaucrat::getGrade(void) const{
    return (this->_grade);
}

std::string const &Bureaucrat::getName(void) const {
    return (this->_name);
}

void Bureaucrat::increment(int more_grade){
    int tmp;
    try{
        if (more_grade > 150)
            throw Bureaucrat::GradeTooHighException();
        if (more_grade < 1)
            throw Bureaucrat::GradeTooLowException();
        tmp = this->_grade - more_grade;
        if (tmp < 1)
            throw Bureaucrat::GradeExceed();
    }catch(Bureaucrat::GradeTooHighException &e){
        std::cout << e.what() << std::endl;
        return;
    }catch(Bureaucrat::GradeTooLowException &e){
        std::cout << e.what() << std::endl;
        return ;
    }catch(Bureaucrat::GradeExceed &e){
        std::cout << e.what() << std::endl;
        return ;
    }
    this->_grade -= more_grade;
}

void Bureaucrat::decrement(int more_grade){
    int tmp;
    try{
        if (more_grade > 150)
            throw Bureaucrat::GradeTooHighException();
        if (more_grade < 1)
            throw Bureaucrat::GradeTooLowException();
        tmp = this->_grade + more_grade;
        if (tmp > 150)
            throw Bureaucrat::GradeExceed();
    }catch(Bureaucrat::GradeTooHighException &e){
        std::cout << e.what() << std::endl;
        return;
    }catch(Bureaucrat::GradeTooLowException &e){
        std::cout << e.what() << std::endl;
        return ;
    }catch(Bureaucrat::GradeExceed &e){
        std::cout << e.what() << std::endl;
        return ;
    }
    this->_grade += more_grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return  ("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return  ("Grade is too Low");
}
    
const char * Bureaucrat::GradeExceed::what() const throw(){
    return  ("Grade has exceed");
}


std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj){
    os << obj.getName() << " ," <<  "bureaucrat grade " <<  obj.getGrade();
    return os;
}