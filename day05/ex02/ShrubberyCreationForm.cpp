/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:43 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:14:44 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
Form("none", 145, 137){
    std::cout << "ShrubberyCreationForm: defualt constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
    std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    // Do nothing , since all member private
    //  Do nothing, since *all member is a const variable and cannot be modified
    (void)other;
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int signRequired, int executionRequired) : 
Form(name, signRequired, executionRequired){
    std::cout << "ShrubberyCreationForm: parameterized constructor called" << std::endl;
     if (signRequired < 1 || executionRequired < 1)
        throw Form::GradeTooHighException();
    if (signRequired > 150 || executionRequired > 150)
        throw Form::GradeTooLowException(); 
}


void ShrubberyCreationForm::executeRequest(std::string target) const{
    std::ofstream outdata;
    std::string tree;

    outdata.open(target.append("_shrubery"));

    if (!outdata){
        std::cerr << "Error: file could not be opened" << std::endl;
        std::exit(1);
    }
    std::cout << "ShrubberyCreationFrom executing the from..." << std::endl;
    tree = "\n\
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
    outdata << tree;
    outdata.close();
}