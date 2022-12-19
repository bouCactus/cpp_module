#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat one("one");
    try{
        // for (int i = 0 ; i < 153 ; i++)
            // one.decrementGrade();
        std::cout << one << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}