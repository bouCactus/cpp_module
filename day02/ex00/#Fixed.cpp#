
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



Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  setRawBits(0);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &obj)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = obj;
}

int    Fixed::getRawBits(void)const
{
  std::cout << "getRawBits member function called" << std::endl;
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
