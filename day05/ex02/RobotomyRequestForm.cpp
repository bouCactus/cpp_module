
#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void) : 
Form("none", 145, 137)
{
    std::cout << "RobotomyRequestForm: defualt constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
    std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm: destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
    {
        // Do nothing , since all member private
        //  Do nothing, since *all member is a const variable and cannot be modified
    }
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string &name, int signRequired, int executionRequired) : 
Form(name, signRequired, executionRequired)
{
    std::cout << "RobotomyRequestForm: parameterized constructor called" << std::endl;
}


void RobotomyRequestForm::executeRequest(std::string target) const
{
   
}