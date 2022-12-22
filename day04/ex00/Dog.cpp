#include"Animal.hpp"
#include"Dog.hpp"
#include<iostream>

Dog::Dog()
{
    setType("Dog");
    std::cout << this->_type << " defult constructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << this->_type << " distructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this  = copy;
}
Dog &Dog::operator= (const Dog &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout << this->_type << ": wuff ouff owff wowff" << std::endl;
}