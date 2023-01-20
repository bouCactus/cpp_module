/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:24 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:14:25 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) : 
Form("none", 25, 5){
    std::cout << "PresidentialPardonForm: defualt constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other){
    std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
    *this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "PresidentialPardonForm: destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
 // Do nothing , since all member private
//  Do nothing, since *all member is a const variable and cannot be modified
    (void)other;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int signRequired, int executionRequired) : 
Form(name, signRequired, executionRequired){
    std::cout << "PresidentialPardonForm: parameterized constructor called" << std::endl;
    if (signRequired < 1 || executionRequired < 1)
        throw Form::GradeTooHighException();
    if (signRequired > 150 || executionRequired > 150)
        throw Form::GradeTooLowException(); 
}


void PresidentialPardonForm::executeRequest(std::string target) const{    
    std::cout << "PresidentialPardonFrom executing the form...." << std::endl;
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}