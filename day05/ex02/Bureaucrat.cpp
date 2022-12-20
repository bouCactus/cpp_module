#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):
_name("none"),
_grade(150)
{
    std::cout << "Bureaucrat: Defualt constructor called" <<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat: copy constructor called" << std::endl;
    *this = copy;
}
Bureaucrat::Bureaucrat(std::string name):
_name(name),
_grade(150)
{
    std::cout << "Bureaucrat: parameterized constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat: copy assignment operator called" << std::endl; 
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_grade = copy._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat: destructor called" << std::endl;
}

std::string Bureaucrat::getName(void)const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const 
{
    return (this->_grade);
}

void Bureaucrat::setName(std::string name)
{
    this->_name = name;
}

void    Bureaucrat::setGrade(int grade)
{
    this->_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{

    if ((this->_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{

    if ((this->_grade + 1) > 150 )
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return ("the gade is to high");
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return ("the gade is too low");
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj)
{
    out <<obj.getName() << ", bureaucrat grade " << obj.getGrade() ;
    return (out);
}

void  Bureaucrat::signForm( Form &form)
{
    // Form form(this->getName() + "form");
    try{
        form.beSigned(*this);
        std::cout << this->getName() << " bureaucrat signed " << form.getName();
    }
   catch(std::exception &e)
   {
        std::cout << this->getName() << " bureaucrat couldn't sign " << form.getName()
        << " because " << e.what();
   }

}