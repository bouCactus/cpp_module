#include"Animal.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"
#include<iostream>

WrongCat::WrongCat(){
    this->_type = "WrongCat";
    this->_wrongCatBrain = new Brain();
    std::cout << this->_type << " defult constructor called" << std::endl;
}
WrongCat::~WrongCat(){
    delete this->_wrongCatBrain;
    std::cout << this->_type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
    this->_wrongCatBrain = new Brain();
    *this = copy;
}

WrongCat &WrongCat::operator= (const WrongCat &copy){
    if (this != &copy){
        *(this->_wrongCatBrain) = *(copy._wrongCatBrain);
        this->_type = copy._type;
    }
    return (*this);
}
void WrongCat::makeSound( void ) const{
    std::cout << this->_type << " meoow mEEEEEEEEEEEEEEEEEwr" << std::endl;
}