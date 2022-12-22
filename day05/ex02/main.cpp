#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{   
    std::string name = "theform";
    Bureaucrat one("someone", 2);
    ShrubberyCreationForm theform(name, 10, 2);

    try{
        // for (int i = 0 ; i < 153 ; i++)
        //     one.decrementGrade();
        // one.setGrade(155);
        one.signForm(theform);
        // std::cout << one << std::endl;
        one.executeForm(theform);
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