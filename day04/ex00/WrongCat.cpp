#include"Animal.hpp"
#include"WrongCat.hpp"
#include<iostream>

WrongCat::WrongCat(){
    this->_type = "WrongCat";
    std::cout << this->_type << " default constructor called" << std::endl;
}
WrongCat::~WrongCat(){
    std::cout << this->_type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
    *this = copy;
}

WrongCat &WrongCat::operator= (const WrongCat &copy){
    if (this != &copy){
        this->_type = copy._type;
    }
    return (*this);
}

void WrongCat::makeSound( void ) const{
    std::cout << this->_type << " meoow mEEEEEEEEEEEEEEEEEwr" << std::endl;
}