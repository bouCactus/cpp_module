
/*
  this is an inplementation of fixed point with all operators and two function max minx
  source:
  > https://vanhunteradams.com/FixedPoint/FixedPoint.html
  > https://www.youtube.com/watch?v=npQF28g6s_k
  first code:
  > multiple operator : (((x)>>8 * (y)>>8)>>0) 
  > float to Fiexd Point : fNumber = roundf(num * 256) : num * 2^fractionalBite
  > Fiexd Point to float : fNumber / 2^fractionbite : (float)fNumber / (float)fractionalBit
  > Fiexd Point to int   :  Fnumber * 2^fractionBite shifting to right with fractionbite number 
 */

#include "Fixed.hpp"

const int Fixed::_fractionBite = 8;

Fixed::Fixed(void) :
  _fNumber(0){
}

Fixed::Fixed(Fixed const &other){
  *this = other;
}

Fixed::Fixed(int num){
  _fNumber = num << _fractionBite;
}

Fixed::Fixed(float const num){

  _fNumber = roundf(num * (float) (1 << _fractionBite));
}

Fixed::~Fixed(void){
}

int    Fixed::getRawBits(void)const{
  return (_fNumber);
}

void    Fixed::setRawBits(int number){
  _fNumber = number;
}

float Fixed::toFloat(void)const{
  return ((float)_fNumber / (float)(1<<_fractionBite));
}

int Fixed::toInt(void)const{
  return (_fNumber >> _fractionBite);
}

Fixed& Fixed::operator=(const Fixed &other){
  if (this != &other){
    _fNumber = other.getRawBits();
  }
  return (*this);
}

Fixed Fixed::operator+(const Fixed &other){
  Fixed sum;
  
  sum.setRawBits( this->getRawBits() + other.getRawBits());
  return (sum);
}

Fixed Fixed::operator-(const Fixed &obj){
  Fixed sub;
  
  sub.setRawBits( this->getRawBits() - obj.getRawBits());
  return (sub);
}

Fixed Fixed::operator*(const Fixed &obj){
  Fixed mult;

  mult.setRawBits((long long )(this->getRawBits() * (long long )obj.getRawBits()) >> _fractionBite);
  return ( mult);
}

Fixed Fixed::operator/(const Fixed &obj){
  Fixed div;
 
  div.setRawBits(((long long ) this->getRawBits() << _fractionBite) / obj.getRawBits());
  return (div);
}

bool Fixed::operator<(const Fixed &obj){
  return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>(const Fixed &obj){
  return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj){
  return (this->getRawBits() <= obj.getRawBits());
}
    
bool Fixed::operator>=(const Fixed &obj){
  return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj){
  return (this->getRawBits() == obj.getRawBits());
}
    
bool Fixed::operator!=(const Fixed &obj){
  return (this->getRawBits() != obj.getRawBits());
}

Fixed& Fixed::operator++(){
  this->setRawBits(this->getRawBits() + 1);
  return (*this);
}

Fixed Fixed::operator++(int){
  Fixed temp;
  temp = *this;
  _fNumber = _fNumber << 1;
  return (temp);
}

Fixed& Fixed::operator--(){
  this->setRawBits(this->getRawBits() - 1);
  return (*this);
}

Fixed Fixed::operator--(int){
  Fixed temp;
  temp = *this;
  _fNumber = _fNumber >> 1;
  return (temp);
}
Fixed& Fixed::min(Fixed& first, Fixed& second){
  if (first.getRawBits() < second.getRawBits())
    return (first);
  else
    return (second);
}
Fixed& Fixed::min(const Fixed& first, const Fixed& second){
  if (first.getRawBits() < second.getRawBits())
    return (Fixed&)(first);
  else
    return (Fixed&)(second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second){
  if (first.getRawBits() > second.getRawBits())
    return (Fixed&)(first);
  else
    return (Fixed&)(second);
}

Fixed& Fixed::max(const Fixed& first, const Fixed& second){
  if (first.getRawBits() > second.getRawBits())
    return (Fixed&)(first);
  else
    return (Fixed&)(second);
}

std::ostream& operator<<(std::ostream &out , const Fixed &fixed){
  out << fixed.toFloat() ;
  return (out);
}
