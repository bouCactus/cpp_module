

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string &name);
    ShrubberyCreationForm(std::string &name, int signRequired, int executionRequired);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
    void execute(Bureaucrat const &bureaucrat) const;
private:     
};

#endif