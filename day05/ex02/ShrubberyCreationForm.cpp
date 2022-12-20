
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):
Form("none", 145, 137)
{
    std::cout << "ShrubberyCreationForm: defualt constructor called" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
    std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
        //Do nothing , since all member private
        // Do nothing, since *all member is a const variable and cannot be modified
    }
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &name):
Form(name, 145, 137)
{
    std::cout << "ShrubberyCreationForm: parameterized constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &name, int signRequired, int executionRequired):
Form(name, signRequired, executionRequired)
{
    std::cout << "ShrubberyCreationForm: parameterized constructor called"<<std::endl;
}



void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat)const
{
   std::ofstream outdata;
   std::string tree;

   outdata.open(this->getName().append("Shrubery"));
   if (!outdata)
   {
        std::cerr << "Error: file could not be opened" << std::endl;
        exit(1);
   }
   //autdata << something
      tree ="\n\
     ccee88oo\n\
  C8O8O8Q8PoOb o8oo\n\
 dOB69QO8PdUOpugoO9bD\n\
CgggbU8OU qOp qOdoUOdcb\n\
    6OuU  /p u gcoUodpP\n\
      \\\\\\//  /douUP\n\
        \\\\\\///\n\
         |||/\n\
         |||\\/\n\
         |||||\n\
   .....//||||\\....\n";
   outdata << tree ;
   outdata.close();

}