#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << "---------test the execution of ShrubberyCreation From--------\n"
              << std::endl;
    {
        try
        {
            Bureaucrat scabtree("scabtree", 5);
            ShrubberyCreationForm shrubberyFrom("ShrubberyFrom", 10, 13);

            scabtree.signForm(shrubberyFrom);
            shrubberyFrom.execute(scabtree);
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
            RobotomyRequestForm shrubberyFrom("ShrubberyFrom", 10, 13);

           screwtape.signForm(shrubberyFrom);
            shrubberyFrom.execute(screwtape);
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
            PresidentialPardonForm shrubberyFrom("ShrubberyFrom", 10, 13);

            toadpipe.signForm(shrubberyFrom);
            shrubberyFrom.execute(toadpipe);
            std::cout << toadpipe << std::endl;
        }
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }

    return (0);
}