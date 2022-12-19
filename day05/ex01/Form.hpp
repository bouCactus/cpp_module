

#ifndef __FORM_H__
#define __FORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>

class Form{
public:
    Form(void);
    Form(std::string name);
    Form(const Form &copy);
    ~Form(void);
    Form    &operator=(const Form &copy);
    void            beSigned(Bureaucrat &obj);
    std::string     getName(void) const;
    bool            getStatus(void) const;
    const int       getSignRequired(void) const;
    const int       getExecutionRequired(void) const;
    struct      GradeTooHighException : public std::exception
    {
        const char *what()const _NOEXCEPT;
    };
    struct      GradeTooLowException : public std::exception
    {
        const char *what() const _NOEXCEPT;
    };
private:
    const std::string   _name;
    bool                _status;
    const int           _signRequired;
    const int           _executionRequired;

};

std::ostream& operator<< (std::ostream& out, const Form &obj);
#endif