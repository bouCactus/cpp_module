#include"Animal.hpp"
#include"Cat.hpp"
#include<iostream>

Cat::Cat()
{
    setType("Cat");
    std::cout << this->_type << " defult constructor called" << std::endl;
    _catBrain = new Brain();
}
Cat::~Cat()
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete _catBrain;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
}
Cat &Cat::operator= (const Cat &copy)
{
    if (this != &copy)
    {
      this->_catBrain = new Brain();
      *(this->_catBrain) = *(copy._catBrain);
      this->_type = copy._type;
    }
    return (*this);
}
void Cat::makeSound( void )
{
    std::cout << this->_type << " meow EEEEEEAAAAAAAAAAAAAAARRRRRRRRR" << std::endl;
}