
/*
 this program contructor overload should fix because i feel the postion where you put is not right so deal wihtout right
and explian why this ex exist
 */

#include "Fixed.hpp"

const int Fixed::_fractionBite = 8;

Fixed::Fixed() :
  _fNumber(0){
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other){
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed::Fixed(int num){
  std::cout << "Int constructor called" << std::endl;
  _fNumber = num << _fractionBite;
}

Fixed::Fixed(float const num){
  std::cout << "Float constructor called" << std::endl;
  //fNumber = roundf(num * 256); num * 2^fractionalBite
  _fNumber = roundf(num * (float) (1 << _fractionBite));
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void)const{
  return (_fNumber);
}

void    Fixed::setRawBits(int number){
  _fNumber = number;
}

Fixed &Fixed::operator=(const Fixed &other){
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
    this->_fNumber = other.getRawBits();
  return (*this);
}

float Fixed::toFloat(void)const{
  //fNumber / 2^fractionbite --> (float)fNumber / (float)fractionalBit
  return (_fNumber / (float)(1<<_fractionBite));
}

int Fixed::toInt(void)const{
  // Fnumber * 2^fractionBite shifting to right with fractionbite number
  return (_fNumber >> _fractionBite);
}

std::ostream& operator<<(std::ostream &out , const Fixed &fixed)
{
  out << fixed.toFloat() ;
  return (out);
}
