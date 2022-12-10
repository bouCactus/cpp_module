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

void Dog::makeSound( void ) const
{
    std::cout << this->_type << " wuff ouff owff wowff" << std::endl;
}