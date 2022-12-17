#include"Animal.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"
#include<iostream>

WrongCat::WrongCat()
{
    setType("WrongCat");
    std::cout << this->_type << " defult constructor called" << std::endl;
    _wrongCatBrain = new Brain();
}
WrongCat::~WrongCat()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
}

WrongCat &WrongCat::operator= (const WrongCat &copy)
{
    if (this != &copy)
    {
        this->_wrongCatBrain = new Brain();
        *(this->_wrongCatBrain) = *(copy._wrongCatBrain);
        this->_type = copy._type;
    }
    return (*this);
}
void WrongCat::makeSound( void ) const
{
    std::cout << this->_type << " meoow mEEEEEEEEEEEEEEEEEwr" << std::endl;
}