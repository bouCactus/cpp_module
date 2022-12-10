
#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain defualt constructar called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
   std::cout << "Brain copy constructor called" << std::endl;
   *this = copy; 
}

Brain::~Brain(void)
{
    std::cout << "Brain distructor called" << std::endl;
}

Brain& Brain:: operator=(const Brain &copy)
{
    if (*this != copy)
    {

    }
    return (this)
}