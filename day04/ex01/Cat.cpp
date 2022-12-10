#include"Animal.hpp"
#include"Cat.hpp"
#include<iostream>

Cat::Cat()
{
    setType("Cat");
    std::cout << this->_type << " defult constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << this->_type << " distructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << this->_type << " meow EEEEEEAAAAAAAAAAAAAAARRRRRRRRR" << std::endl;
}