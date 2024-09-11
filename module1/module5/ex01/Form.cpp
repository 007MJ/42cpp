#include "Form.hpp"

Form::~Form(){}
Form::Form(){}

Form & Form::operator=(const Form &obj){
    this->_isSigned = obj.getIsSigned();
}

const char * Form::GradeTooHighException::what() const throw(){
    return  ("Grade is above 150");
}

const char * Form::GradeTooLowException::what() const throw(){
    return  ("Grade is lower than 1");
}
    
const char * Form::GradeExceed::what() const throw(){
    return  ("The grade parameter will exceed");
}

std::ostream &operator<<(std::ostream & os , const Form &obj){
    os << "Name : " << obj.getName() << " signe? : " << obj.getIsSigned() << " requis pour signe " << obj.getCanSigned() << " executer? : " << obj.getExecute();
    return os;
}

Form::Form(const std::string  name,  const int cansSigned, 
    const int execute): _name(name), _canSigned(cansSigned), _execute(execute){
    try
    {
        if (execute > 150 || cansSigned > 150)
            throw  Form::GradeTooHighException();
        if (execute < 1 || cansSigned < 1)
            throw Form::GradeTooLowException();
    }
    catch(Form::GradeTooHighException &e){
        std::cerr << e.what() << '\n';
    }
    catch(Form::GradeTooLowException &e){
        std::cerr << e.what() << '\n';
    }
    this->_isSigned = false;
}

void Form::beSigned(Bureaucrat &obj){
    try
    {
         if (this->_canSigned > 150)
            throw  Form::GradeTooHighException();
        if (this->_canSigned < 1)
            throw Form::GradeTooLowException();
        if (this->_canSigned <= 150 && this->_canSigned >= 1 && obj.getGrade() <= 150 &&  obj.getGrade() >= 1)
        {
            if (obj.getGrade() <= this->_canSigned  ){
                this->_isSigned = true;
            }else{
                throw Form::GradeTooLowException();
            }
        }

    }catch(Form::GradeTooLowException& e){
        e.what();
    }
}

const std::string Form::getName(void) const{
    return (this->_name);
}

bool Form::getIsSigned(void) const{
    return (this->_isSigned);
}

int Form::getExecute(void) const{
        return(this->_execute);
}

int Form::getCanSigned(void) const{
    return (this->_canSigned);
}