/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:08 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:09 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern(void){
    std::cout << "Intern: defualt constructor called" << std::endl;
}

Intern::Intern(const Intern &copy){
    std::cout << "Intern: copy constructor called" << std::endl;
    *this = copy;
}
Intern::~Intern(void){
    std::cout << "Intern: destcructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &copy){
        //do nothing becuase nothing to do
    (void)copy;
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string target){
    Form *form;

    switch(hashit(name))
    {
        case 0:
            form = new PresidentialPardonForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new ShrubberyCreationForm(target);
            break;
        default:
            throw FormNotFound();
    }
    std::cout << "Intern creates " << name << std::endl;
    return form;
    
}
int Intern::hashit(std::string name){
      int i;
    std::string str2[3] = {"presidential pardon",
                            "robotomy request",
                             "shrubbery creation"};

    i = 0;
    while (i < 3 && name.compare(str2[i]))
        i++;
    return (i);
}

const char* Intern::FormNotFound::what() const throw(){
    return ("traget not found!");
}
