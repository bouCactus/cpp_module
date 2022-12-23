
#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) : 
Form("none", 25, 5)
{
    std::cout << "PresidentialPardonForm: defualt constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm: destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this != &copy)
    {
        // Do nothing , since all member private
        //  Do nothing, since *all member is a const variable and cannot be modified
    }
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : 
Form(name, 25, 5)
{
    std::cout << "PresidentialPardonForm: parameterized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int signRequired, int executionRequired) : 
Form(name, signRequired, executionRequired)
{
    std::cout << "PresidentialPardonForm: parameterized constructor called" << std::endl;
}


void PresidentialPardonForm::executeRequest(std::string target) const
{  
   
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}