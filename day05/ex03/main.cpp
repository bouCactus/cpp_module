/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:25 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:26 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{   
    std::cout << "---------test the execution of ShrubberyCreation From--------\n"
              << std::endl;
    {
        try
        {
            Bureaucrat scabtree("scabtree", 5);
            Intern form;
            Form *ptrForm;
            
            ptrForm= form.makeForm("shrubbery creation", "shrubberyFrom");
            scabtree.signForm(*ptrForm);
            ptrForm->execute(scabtree);
            std::cout << scabtree << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl
              << "------- test the execution of RobotomyRequest From --------\n"
              << std::endl;
    {
        try{
            Bureaucrat screwtape("Screwtape", 5);
            Intern form;
            Form *ptrForm;
            
            ptrForm = form.makeForm("robotomy request" , "robotomy");
            screwtape.signForm(*ptrForm);
            ptrForm->execute(screwtape);
            std::cout << screwtape << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
      std::cout << std::endl
              << "------- test the execution of PresidentialPardonForm From --------\n"
              << std::endl;
    {
        try{
            Bureaucrat toadpipe("Toadpipe", 5);
            Intern form;
            Form *ptrForm;

            ptrForm = form.makeForm("presidential pardon", "presidential");
            toadpipe.signForm(*ptrForm);
            ptrForm->execute(toadpipe);
            std::cout << toadpipe << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
     std::cout << std::endl
              << "------- test the execution of wrong From --------\n"
              << std::endl;
    {
        try{
            Bureaucrat toadpipe("Toadpipe", 5);
            Intern form;
            Form *ptrForm;

            ptrForm = form.makeForm("wrong", "wrong");
            toadpipe.signForm(*ptrForm);
            ptrForm->execute(toadpipe);
            std::cout << toadpipe << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}