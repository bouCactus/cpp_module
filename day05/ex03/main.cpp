#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{   
    // std::string name = "ayoub";
    // Bureaucrat one("someone", 2);
    // // theform(name, 10, 2)
    // Form *a = new RobotomyRequestForm("ayoub", 15, 10);

    // try{
    //     // for (int i = 0 ; i < 153 ; i++)
    //     //     one.decrementGrade();
    //     // one.setGrade(155);
    //     one.signForm(*a);
    //     // std::cout << one << std::endl;
    //     one.executeForm(*a);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // catch(char const *e)
    // {
    //     std::cout << e << std::endl;
    // }
    // try
    // {
    //     Intern someRandomIntern;
    //     Form* rrf;

    //     rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
 
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