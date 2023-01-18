#include "Animal.hpp"
#include <iostream>

Animal::Animal(void):
_type("Undefind type Animal"){
    std::cout << "Animal: defluat constructor called" << std::endl;
}

Animal::Animal(const std::string type) : 
_type(type){
    std::cout << "Animal: parameterized consturctor called" << std::endl;
}
Animal::Animal(const Animal &copy){
    *this = copy;
}
Animal &Animal::operator= (const Animal &copy){
    if (this != &copy)
    {
        this->_type = copy._type;        
    }
    return (*this);
}

Animal::~Animal(void){
    std::cout << "Animal: destructor called" << std::endl;
}

void Animal::setType(const std::string &type){
    this->_type = type;
}

std::string Animal::getType(void) const{
    return (this->_type);
}

void Animal::makeSound() const{
    std::cout << this->_type << ": undefind sound" << std::endl;
}