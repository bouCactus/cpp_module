#include"Animal.hpp"
#include"Dog.hpp"
#include<iostream>

Dog::Dog()
{
    setType("Dog");
    std::cout << _type << " defult constructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << _type << " distructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << _type << " sound of Dog in on" << std::endl;
}