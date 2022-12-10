#include "Animal.hpp"
#include <iostream>

Animal::Animal():_type("Undefind type Animal")
{
    std::cout << "Animal: defluat constructor called" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
}

Animal::~Animal()
{
    std::cout << "Animal: distructor called" << std::endl;
}

void Animal::setType(const std::string &type)
{
    this->_type = type;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << this->_type << ": undefind sound" << std::endl;
}