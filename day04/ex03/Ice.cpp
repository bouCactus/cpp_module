
#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void):
AMateria("ice")
{
    std::cout << "Ice: defluat constructor called" << std::endl;
}

Ice::Ice(const Ice &copy)
{
    std::cout << "Ice: copy constructor called" << std::endl;
    *this = copy;
}

Ice &Ice::operator= (const Ice &copy)
{
    std::cout << "Ice: copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

Ice::~Ice(void)
{
   std::cout << "Ice: destructor called" << std::endl; 
}

AMateria *AMateria::clone(void)const
{
    return (new Ice());
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* shoots an ice blot at  " << target.getName() << " *" << std::endl;
}
