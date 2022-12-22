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

Cat::Cat(const Cat &copy)
{
    *this = copy;
}

Cat &Cat::operator= (const Cat &copy)
{
    if (this != &copy)
    {
      this->_type = copy._type;
    }
    return (*this);
}

void Cat::makeSound( void ) const
{
    std::cout << this->_type << " meow EEEEEEAAAAAAAAAAAAAAARRRRRRRRR" << std::endl;
}