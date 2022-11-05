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
  Fixed b(2);
  Fixed resut;
  Fixed sum(4.5f);

  a = sum;
  resut =  b + a;

  std::cout  << resut << std::endl << a << std::endl << b << std::endl;
  return (0);
}
