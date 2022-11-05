
/*
 this program contructor overload should fix because i feel the postion where you put is not right so deal wihtout right
and explian why this ex exist
 */

#include "Fixed.hpp"



Fixed::Fixed()
{

  setRawBits(0);
}


Fixed::Fixed(Fixed const &obj)
{

  *this = obj;
}

Fixed::Fixed(int num)
{

  fNumber = num << fractionBite;
}

Fixed::Fixed(float const num)
{

  //fNumber = roundf(num * 256); num * 2^fractionalBite
  fNumber = roundf(num * (float) (1 << fractionBite));
}

Fixed::~Fixed()
{
}

int    Fixed::getRawBits(void)const
{
  return (fNumber);
}

void    Fixed::setRawBits(int number)
{
  fNumber = number;
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

void Fixed::operator=(const Fixed &objPassByref)
{

  this->setRawBits(objPassByref.getRawBits());
}

Fixed Fixed::operator+(const Fixed &obj)
{
  Fixed sum;
  
  sum.setRawBits( this->getRawBits() + obj.getRawBits());
  return (sum);
}
/*
void Fixed::operator-(const Fixed &obj)
{
  return (  this->getRawBits() );
}

void Fixed::operator*(const Fixed &obj)
{
  return (  this->getRawBits() );
}

void Fixed::operator/(const Fixed &obj)
{
  return (  this->getRawBits() );
}
*/
