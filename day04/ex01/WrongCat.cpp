#include"Animal.hpp"
#include"WrongCat.hpp"
#include<iostream>

WrongCat::WrongCat()
{
    setType("WrongCat");
    std::cout << this->_type << " defult constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << this->_type << " distructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << this->_type << " meoow mEEEEEEEEEEEEEEEEEwr" << std::endl;
}