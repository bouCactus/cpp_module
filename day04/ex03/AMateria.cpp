
#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void)
{
    std::cout << "AMateria defluat constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria::AMateria(std::string const & type):
_type(type)
{
    std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator= (const AMateria &copy)
{
    std::cout << "AMteria copy assignment operator called " << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

std::string const &AMateria::getType(void)const
{
    return(this->_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* not to use in this materia *" << std::endl;
    target.getName();// you should remove this
}
