#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("NONE"), _grade(0){}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat &copy) {
    *this = copy;
}
Bureaucrat & Bureaucrat::operator=(Bureaucrat &obj){
    this->_grade = obj.getGrade();
    return (*this);
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade){
    if (grade < 0)
    {
        throw Bureaucrat::GradeTooLowException();
        return ;
    }
    if ( grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
        return ;
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
    if (more_grade > 150){
        throw Bureaucrat::GradeTooHighException();
        return ;
    }
    if (more_grade < 1){
        throw Bureaucrat::GradeTooLowException();
        return ;
    }
    tmp = this->_grade - more_grade;
    if (tmp < 1){
        throw Bureaucrat::GradeExceed();
        return ;
    }
    this->_grade -= more_grade;
}

void Bureaucrat::decrement(int more_grade){
    int tmp;
        if (more_grade > 150){
            throw Bureaucrat::GradeTooHighException();
            return;
        }
        if (more_grade < 1){
            throw Bureaucrat::GradeTooLowException();
            return ;
        }
        tmp = this->_grade + more_grade;
        if (tmp > 150){
            throw Bureaucrat::GradeExceed();
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

void Bureaucrat::signForm(Form &obj){
    if (obj.getIsSigned())
        std::cout << this->_name << " signed " <<  obj.getName() << std::endl;
    else
        std::cout << this->_name << " couldn’t sign " <<  obj.getName() << " because Rick and Morty didn't approve"<< std::endl;
}
    
const char * Bureaucrat::GradeExceed::what() const throw(){
    return  ("The grade parameter will exceed");
}


std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj){
    os << obj.getName() << " ," <<  "bureaucrat grade " <<  obj.getGrade();
    return os;
}