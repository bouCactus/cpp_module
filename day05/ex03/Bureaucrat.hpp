
#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;
class Bureaucrat{
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat &operator= (const Bureaucrat &copy);
    std::string getName(void)const;
    int         getGrade(void)const;
    void        setName(std::string name);
    void        setGrade(int grade);
    void        incrementGrade(void);
    void        decrementGrade(void);
    void        signForm(Form &form);
    void        executeForm(Form const &form);
    struct      GradeTooHighException : public std::exception
    {
        const char *what()const throw();
    };
    struct      GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
private:
    std::string _name;
    int         _grade;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj);
#endif