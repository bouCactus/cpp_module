#include"Animal.hpp"
#include"Cat.hpp"
#include<iostream>

Cat::Cat()
{
    setType("Cat");
    std::cout << _type << " defult constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << _type << " distructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << _type << " sound of Cat in on" << std::endl;
}