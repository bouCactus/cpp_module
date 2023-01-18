#include"Animal.hpp"
#include"Cat.hpp"
#include<iostream>

Cat::Cat(void){
    this->_type ="Cat";
    this->_catBrain = new Brain();
    std::cout << this->_type << " : defult constructor called" << std::endl;
}
Cat::~Cat(void){
    std::cout << this->_type << " : destructor called" << std::endl;
    delete this->_catBrain;
}

Cat::Cat(const Cat &copy){
    this->_catBrain = new Brain();
    *this = copy;
}
Cat &Cat::operator= (const Cat &copy){
    if (this != &copy){
      *(this->_catBrain) = *(copy._catBrain);
      this->_type = copy._type;
    }
    return (*this);
}
void Cat::makeSound( void ) const{
    std::cout << this->_type << " meow EEEEEEAAAAAAAAAAAAAAARRRRRRRRR" << std::endl;
}