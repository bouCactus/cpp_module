#include "Form.hpp"
#include <iostream>

Form::Form(void):
_name("none"),
_signRequired(10),
_executionRequired(13),
_status(false)
{
    std::cout << "Form: defualt constructor called" << std::endl;
}

Form::Form(std::string name):
_name(name),
_signRequired(10),
_executionRequired(13),
_status(false)
{
    std::cout << "Form: parameterized  constructor called" << std::endl;
}

Form::Form(const Form &copy):
_signRequired(10),
_executionRequired(13)
{
    std::cout << "Form: copy constructor called" << std::endl;
    *this = copy;
}

Form &Form::operator=(const Form &copy)
{
    std::cout << "Form: copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_status = copy._status;
    }
    return (*this);
}


Form::~Form(void)
{
    std::cout << "destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() > 150)
        throw Form::GradeTooLowException();
    if (obj.getGrade() < 1)
        throw Form::GradeTooHighException();
    if (obj.getGrade() >= this->_signRequired)
        _status = true;
    else
        throw Form::gradeTooHighException();
}

const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
    return ("the gade is to high");
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("the gade is too low");
}

std::ostream& operator<< (std::ostream& out, const Form &obj)
{
    out << obj.getName() << ", Form status " << obj.getStatus() << " "
    << ", sign requirement " << obj.getSignRequired() << ", execution requirement "
    << obj.getExecutionRequired();
    return (out);
}

std::string Form::getName(void)const
{
    return (this->_name);
}

bool Form::getStatus(void)const
{
    return (this->_status);
}

const int Form::getSignRequired(void) const
{
    return (this->_signRequired);
}

const int Form::getExecutionRequired(void) const
{
    return (this->_executionRequired);
}
