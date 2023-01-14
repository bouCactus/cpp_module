

/*
This program essentially serves as a tutorial for the traditional
camel method, which encourages us to learn everything should to
know about contractors.

* a defualt constractor
* a copy constractor
* a copy assignment operator overload
* a disconstractor

 */

#include "Fixed.hpp"


const int Fixed::_fractionBite = 8;
Fixed::Fixed() :
  _fNumber(0){
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other){
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

int    Fixed::getRawBits(void)const{
  std::cout << "getRawBits member function called" << std::endl;
  return (_fNumber);
}

void    Fixed::setRawBits(int number){
  std::cout << "setRawBits member function called" << std::endl;
  _fNumber = number;
}

Fixed &Fixed::operator=(const Fixed &other){
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other){
    this->_fNumber = other.getRawBits();
  }
  return (*this);
}
