
#include "AMateria.hpp"
#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"


Cure::Cure(void):
AMateria("Cure")
{
    std::cout << "Cure: defluat constructor called" << std::endl;
}

Cure::Cure(const Cure &copy)
{
    std::cout << "Cure: copy constructor called" << std::endl;
    *this = copy;
}

Cure &Cure::operator= (const Cure &copy)
{
    std::cout << "Cure: copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

Cure::~Cure(void)
{
   std::cout << "Cure: destructor called" << std::endl; 
}

AMateria *AMateria::clone(void)const
{
    return (new Cure());
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
