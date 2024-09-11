#pragma once
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
    private:
        std::string const  _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat (Bureaucrat &copy);
        Bureaucrat &operator=(Bureaucrat &obj);
        Bureaucrat(std::string const name, int grade);
        std::string const &getName(void) const;
        void    signForm(Form &obj);
        int getGrade(void) const;
        void increment(int);
        void decrement(int);
        ~Bureaucrat();

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

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj);