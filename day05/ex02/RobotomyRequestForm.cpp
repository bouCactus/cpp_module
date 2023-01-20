/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:31 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:14:32 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
Form("none", 72, 45){
    std::cout << "RobotomyRequestForm: defualt constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy){
    std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
    std::cout << "RobotomyRequestForm: destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
        // Do nothing , since all member private
        //  Do nothing, since *all member is a const variable and cannot be modified
    (void)copy;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int signRequired, int executionRequired) : 
Form(name, signRequired, executionRequired){
    std::cout << "RobotomyRequestForm: parameterized constructor called" << std::endl;
     if (signRequired < 1 || executionRequired < 1)
        throw Form::GradeTooHighException();
    if (signRequired > 150 || executionRequired > 150)
        throw Form::GradeTooLowException(); 
}


void RobotomyRequestForm::executeRequest(std::string target) const{
    int timePeriod = 3600;// second
    double number;
    
    std::cout << "RobotomyRequestForm executing the from...." << std::endl;
    srand(time(NULL));
    number = rand() % timePeriod;
    if (number > (timePeriod / 2)){
        std::cout << "\a";
        std::cout << "      ~~~~" << std::endl;
        std::cout << " . ~~ . ~~ .... ~" << std::endl;
        std::cout << " ......~~~ ~~~ ~~~ ~~ ~~ ~..." << std::endl;
        std::cout << target << " has been robotomized successfully" << std::endl;
    }
    else{
        std::cout << target << "Robotomy failed" << std::endl;
    }
}