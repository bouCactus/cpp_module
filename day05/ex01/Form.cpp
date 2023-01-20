/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:13:20 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:13:21 by aboudarg         ###   ########.fr       */
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

Form::Form(const Form &copy) : 
_signRequired(10),
_executionRequired(13){
    std::cout << "Form: copy constructor called" << std::endl;
    *this = copy;
}

Form &Form::operator=(const Form &other){
    std::cout << "Form: copy assignment operator called" << std::endl;
    if (this != &other){
        this->_status = other._status;
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
