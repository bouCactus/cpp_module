#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat one("one");
    Form theform("theform");

    try{
        // for (int i = 0 ; i < 153 ; i++)
        //     one.decrementGrade();
        one.setGrade(130);
        one.signForm(theform);
        std::cout << one << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}