#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const int _canSigned;
        const int _execute;

    public:
        Form &operator=(const Form &obj);
        Form();
        Form(const std::string  name, const int canSigned, const int execute);
        const std::string getName(void) const;
        bool getIsSigned(void) const;
        int getExecute(void) const;
        int getCanSigned(void) const;
        void beSigned(Bureaucrat &obj);
        ~Form();
        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class GradeExceed : public std::exception{
            public:
                virtual const char *what() const throw();
        };
};


std::ostream &operator<<(std::ostream &os,const  Form &obj); 