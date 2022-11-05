
/*
 this program contructor overload should fix because i feel the postion where you put is not right so deal wihtout right
and explian why this ex exist
 */

#include "Fixed.hpp"



Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  setRawBits(0);
}


Fixed::Fixed(Fixed const &obj)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = obj;
}

Fixed::Fixed(int num)
{
  std::cout << "Int constructor called" << std::endl;
  fNumber = num << fractionBite;
}

Fixed::Fixed(float const num)
{
  std::cout << "Float constructor called" << std::endl;
  //fNumber = roundf(num * 256); num * 2^fractionalBite
  fNumber = roundf(num * (float) (1 << fractionBite));
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void)const
{
  return (fNumber);
}

void    Fixed::setRawBits(int number)
{
  fNumber = number;
}

void Fixed::operator=(const Fixed &objPassByref)
{
  std::cout << "Copy assignment operator called" << std::endl;
  this->setRawBits(objPassByref.getRawBits());
}

float Fixed::toFloat(void)const
{
  //fNumber / 2^fractionbite --> (float)fNumber / (float)fractionalBit
  return (fNumber / (float)(1<<fractionBite));
}

int Fixed::toInt(void)const
{
  // Fnumber * 2^fractionBite shifting to right with fractionbite number
  return (fNumber >> fractionBite);
}

