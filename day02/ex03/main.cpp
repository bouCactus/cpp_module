#include<iostream>
#include"Fixed.hpp"
#include"Point.hpp"


int main()
{
  Point a;
  Point b(10, 2);
  Point c(b);
  Point d(2,3);

  //  std::cout << bsp(a, b, c, d) << std::endl;
  std::cout << Fixed(3) << std::endl;  
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
 
  return (0);
}
