#include"Animal.hpp"
#include"Dog.hpp"
#include<iostream>

Dog::Dog(void){
  this->_type = "Dog";
  std::cout << this->_type << " default constructor called" << std::endl;
}
Dog::~Dog(void){
  std::cout << this->_type << " destructor called" << std::endl;
}

Dog::Dog(const Dog &copy){
  *this  = copy;
}
Dog &Dog::operator= (const Dog &copy){
  if (this != &copy){
    this->_type = copy._type;
  }
  return (*this);
}

void Dog::makeSound( void ) const{
  std::cout << this->_type << ": wuff ouff owff wowff" << std::endl;
}
