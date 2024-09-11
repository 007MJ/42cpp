#include "AForm.hpp"

AForm::~AForm(){}
AForm::AForm(const std::string name, bool siigned, const int canSigned, const int execute) 
    : _name(name), _isSigned(siigned), _canSigned(canSigned), _execute(execute){
}

AForm::AForm(AForm &cope) : 
_name(cope.getName()), _isSigned(cope.getIsSigned()), _canSigned(cope.getCanSigned()), _execute(cope.getExecute()){
}

AForm &AForm::operator=(const AForm &copy){
    this->_isSigned = copy.getIsSigned();
    return (*this);
}

const char * AForm::GradeTooHighException::what() const throw(){
    return  ("Grade is above 150");
}

const char * AForm::GradeCant::what() const throw(){
    return  ("Cant signed the form");
}

const char * AForm::GradeExecute::what() const throw(){
    return  ("Cant execute the form");
}

const char * AForm::GradeTooLowException::what() const throw(){
    return  ("Grade is lower than 1");
}
    
const char * AForm::GradeExceed::what() const throw(){
    return  ("The grade parameter will exceed");
}

std::ostream &operator<<(std::ostream & os , const AForm &obj){
    os << "Name : " << obj.getName() << " signe? : " << obj.getIsSigned() << " requis pour signe " << obj.getCanSigned() << " executer? : " << obj.getExecute();
    return os;
}

AForm::AForm(const std::string  name,  const int cansSigned, 
    const int execute): _name(name), _canSigned(cansSigned), _execute(execute){
    try
    {
        if (execute > 150 || cansSigned > 150)
            throw  AForm::GradeTooHighException();
        if (execute < 1 || cansSigned < 1)
            throw AForm::GradeTooLowException();
    }
    catch(AForm::GradeTooHighException &e){
        std::cerr << e.what() << '\n';
    }
    catch(AForm::GradeTooLowException &e){
        std::cerr << e.what() << '\n';
    }
    this->_isSigned = false;
}

void AForm::beSigned(Bureaucrat &obj)
{
    try
    {
         if (this->_canSigned >= 150)
            throw  AForm::GradeTooHighException();
        if (this->_canSigned <= 1)
            throw AForm::GradeTooLowException();
        if (this->_canSigned <= 150 && this->_canSigned >= 1 && obj.getGrade() <= 150 &&  obj.getGrade() >= 1)
        {
            if (obj.getGrade() <= this->_canSigned  ){
                this->_isSigned = true;
            }else{
                throw AForm::GradeCant();
            }
        }
    }
    catch(AForm::GradeTooLowException& e){
        std::cout << e.what() << std::endl;;
    }
    catch(AForm::GradeCant& e){
        std::cout << e.what() << std::endl;;
    }
    catch(AForm::GradeTooHighException& e){
        std::cout << e.what() << std::endl;;
    }
}

const std::string AForm::getName(void) const{
    return (this->_name);
}

bool AForm::getIsSigned(void) const{
    return (this->_isSigned);
}

int AForm::getExecute(void) const{
        return(this->_execute);
}

int AForm::getCanSigned(void) const{
    return (this->_canSigned);
}

void AForm::execute(Bureaucrat const & executor){
    if (this->getIsSigned())
    {
        try {

            if (executor.getGrade() <= this->getExecute())
            {
                std::cout << "can executer the form" << std::endl;
            }else{
                throw AForm::GradeTooHighException();
            }
        }catch(AForm::GradeTooHighException &e){
            std::cout << e.what() << std::endl;
        }
    }else
        std::cout << "The Form is not signed " << std::endl;
}


void    AForm::setIsSigned(bool siigned){
    this->_isSigned = siigned;
}