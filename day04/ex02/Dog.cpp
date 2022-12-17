#include"Animal.hpp"
#include"Dog.hpp"
#include<iostream>

Dog::Dog()
{
    setType("Dog");
    std::cout << this->_type << " defult constructor called" << std::endl;
    _dogBrain = new Brain();
}
Dog::~Dog()
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete _dogBrain;
}

Dog::Dog(const Dog &copy)
{
    *this  = copy;
}
Dog &Dog::operator= (const Dog &copy)
{
    if (this != &copy)
    {
        this->_dogBrain = new Brain();
        *(this->_dogBrain) = *(copy._dogBrain);
        this->_type = copy._type;
    }
    return (*this);
}
void Dog::makeSound( void )
{
    std::cout << this->_type << ": wuff ouff owff wowff" << std::endl;
}