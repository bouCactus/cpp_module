
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
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain:: operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0 ; i < 100 ; i++)
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}