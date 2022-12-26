#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"

int main(void)
{   
    std::string name = "ayoub";
    Bureaucrat one("someone", 2);
    // theform(name, 10, 2)
    // Form *a = new RobotomyRequestForm("ayoub", 15, 10);
    Form *a = new ShrubberyCreationForm("ayoub", 14, 15);

    try{
        // for (int i = 0 ; i < 153 ; i++)
        //     one.decrementGrade();
        // one.setGrade(155);
        one.signForm(*a);
        // std::cout << one << std::endl;
        one.executeForm(*a);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(char const *e)
    {
        std::cout << e << std::endl;
    }
 
    return (0);
}