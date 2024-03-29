/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:01 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:02 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void):
_name("none"),
_status(false),
_signRequired(10),
_executionRequired(13){
    std::cout << "Form: defualt constructor called" << std::endl;
}

Form::Form(const Form &copy):
_signRequired(10),
_executionRequired(13){
    std::cout << "Form: copy constructor called" << std::endl;
    *this = copy;
}

Form::Form(std::string name, int signRequired, int executionRequired):
_name(name),
_status(false),
_signRequired(signRequired),
_executionRequired(executionRequired){
   std::cout << "Form: parameterized  constructor called" << std::endl; 
    if (signRequired < 1 || executionRequired < 1)
        throw Form::GradeTooHighException();
    if (signRequired > 150 || executionRequired > 150)
        throw Form::GradeTooLowException(); 
}
Form &Form::operator=(const Form &copy){
    std::cout << "Form: copy assignment operator called" << std::endl;
    if (this != &copy){
        this->_status = copy._status;
    }
    return (*this);
}

Form::~Form(void){
    std::cout << "Form: destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat &obj){
    if (obj.getGrade() < 1)
        throw Form::GradeTooHighException();
    if (obj.getGrade() > 150 || obj.getGrade() > this->_signRequired)
        throw Form::GradeTooLowException();
    _status = true;
}

const char* Form::GradeTooHighException::what() const throw(){
    return ("the gade is to high");
}

const char* Form::GradeTooLowException::what() const throw(){
    return ("the gade is too low");
}

std::ostream& operator<< (std::ostream& out, const Form &obj){
    out << obj.getName() << ", Form status " << obj.getStatus() << " "
    << ", sign requirement " << obj.getSignRequired() << ", execution requirement "
    << obj.getExecutionRequired();
    return (out);
}

std::string Form::getName(void)const{
    return (this->_name);
}

bool Form::getStatus(void)const{
    return (this->_status);
}

int Form::getSignRequired(void) const{
    return (this->_signRequired);
}

int Form::getExecutionRequired(void) const{
    return (this->_executionRequired);
}

void Form::execute(Bureaucrat const &executor) const{
    if (!this->getStatus())
        throw "the bureaucrat not sign to the From!";
    if (executor.getGrade() > this->getExecutionRequired())
        throw Form::GradeTooLowException();
    this->executeRequest(this->getName());
}
