

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm: public Form{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(std::string name, int signRequired, int executionRequired);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    void executeRequest(std::string target)const ;
private:     
};

#endif