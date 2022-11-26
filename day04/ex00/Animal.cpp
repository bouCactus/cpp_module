#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal defluat constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
}

Animal::~Animal()
{
    std::cout << "distructor called" << std::endl;
}

void Animal::setType(const std::string &type)
{
    _type = type;
}

std::string Animal::getType(void) const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal undefind sound" << std::endl;
}