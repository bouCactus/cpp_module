/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:02:22 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:02:23 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
  this is for learning how to convert float and int to Fixed Point
  before code :
  > fNumber / 2^fractionbite : (float)fNumber / (float)fractionalBit
  > float to fixed Point : fNumber = roundf(num * 256) : num * 2^fractionalBite 
  > Fixed Point to int   : Fnumber * 2^fractionBite shifting to right with fractionbite number
  explain:
  >0 1000 0000 1001 0001 1110 1011 1000 011
  >0 1000 0000 1001 0001 1110 1011 1000 011
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
    _fNumber = roundf(num *  (1 << _fractionBite));
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
  return ((float)_fNumber / (float)(1<<_fractionBite));
}

int Fixed::toInt(void)const{
  return (_fNumber >> _fractionBite);
}

std::ostream& operator<<(std::ostream &out , const Fixed &fixed)
{
  out << fixed.toFloat() ;
  return (out);
}
