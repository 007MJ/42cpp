#include <iostream>

class Bureaucrat {
    private:
        std::string const  _name;
        int _grade;
        Bureaucrat();
        Bureaucrat &operator=(Bureaucrat &obj);
        Bureaucrat (Bureaucrat &copy);

    public:
        Bureaucrat(std::string const name, int grade);
        std::string const &getName(void) const;
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