
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
  //  std::cout << "deleted" << std::endl;
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

Fixed Fixed::operator-(const Fixed &obj)
{
  Fixed sub;
  sub.setRawBits( this->getRawBits() - obj.getRawBits());
  return (sub);
}

Fixed Fixed::operator*(const Fixed &obj)
{
  Fixed mult;
  /* https://vanhunteradams.com/FixedPoint/FixedPoint.html */
  // (((x)>>8 * (y)>>8)>>0)
  // https://www.youtube.com/watch?v=npQF28g6s_k
  mult.setRawBits((signed long long )(this->getRawBits() * (signed long long )obj.getRawBits()) >> fractionBite);
  return ( mult);
}

Fixed Fixed::operator/(const Fixed &obj)
{
  Fixed div;
 
  div.setRawBits(((signed long long ) this->getRawBits() << fractionBite) / obj.getRawBits());
  return (div);
}





bool Fixed::operator<(const Fixed &obj)
{
  return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>(const Fixed &obj)
{
  return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj)
{
  return (this->getRawBits() <= obj.getRawBits());
}
    
bool Fixed::operator>=(const Fixed &obj)
{
  return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj)
{
  return (this->getRawBits() == obj.getRawBits());
}
    
bool Fixed::operator!=(const Fixed &obj)
{
  return (this->getRawBits() != obj.getRawBits());
}

Fixed& Fixed::operator++()
{
  this->setRawBits(this->getRawBits() + 1);
  return (*this);
}

Fixed& Fixed::operator++(int)
{
  Fixed *cp = new Fixed;
  *cp = *this;
  this->setRawBits(this->getRawBits() + 1);
  return (*cp);
}

Fixed& Fixed::operator--()
{

  this->setRawBits(this->getRawBits() - 1);
  return (*this);
}

Fixed& Fixed::operator--(int)
{
  Fixed *cp = new Fixed;
  *cp = *this;
  this->setRawBits(this->getRawBits() - 1);
  return (*cp);
}
Fixed& Fixed::min(Fixed& objOne, Fixed& objTwo)
{
  if (objOne.getRawBits() < objTwo.getRawBits())
    return (objOne);
  else
    return (objTwo);
}
Fixed& Fixed::min(const Fixed& objOne, const Fixed& objTwo)
{
  if (objOne.getRawBits() < objTwo.getRawBits())
    return (Fixed&)(objOne);
  else
    return (Fixed&)(objTwo);
}

Fixed& Fixed::max(Fixed& objOne, Fixed& objTwo)
{
  if (objOne.getRawBits() > objTwo.getRawBits())
    return (Fixed&)(objOne);
  else
    return (Fixed&)(objTwo);
}

Fixed& Fixed::max(const Fixed& objOne, const Fixed& objTwo)
{
  if (objOne.getRawBits() > objTwo.getRawBits())
    return (Fixed&)(objOne);
  else
    return (Fixed&)(objTwo);
}


std::ostream& operator<<(std::ostream &out , const Fixed &Fnumber)
{
  out << Fnumber.toFloat() ;
  return (out);
}
