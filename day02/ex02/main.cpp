#include<iostream>
#include"Fixed.hpp"

std::ostream& operator<<(std::ostream &out , const Fixed &Fnumber)
{
  out << Fnumber.toFloat() ;
  return (out);
}

int main()
{
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  
  std::cout << b << std::endl;

  std::cout << Fixed::max( a, b ) << std::endl;
  return (0);
}