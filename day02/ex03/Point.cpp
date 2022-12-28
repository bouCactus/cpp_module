
// nothing for now

#include "Point.hpp"

Point::Point():x(0),y(0)
{
  // todo call setter member function
  std::cout << "defualt constractor called" << std::endl;
}

Point::Point(Point& obj):x(obj.x), y(obj.y)
{
  std::cout << "Copy constractor called" << std::endl;
}

Point::Point(float x, float y):x(x),y(y)
{
}

Point::~Point()
{
  std::cout << "Point: Descontrcutor called" << std::endl;
}

Point& Point::operator=(Point const &obj)
{
  if(&obj != this)
  {
    std::cout << "members of the class is const impossable to implemnt =  operator in this case" << std::endl;
  }
  return (*this);
}

Fixed Point::getX()const
{
  return (x);
}
Fixed Point::getY()const
{
  return (y);
}

std::ostream& operator<<(std::ostream &out , const Point &p)
{
  out << "(" << p.getX() << ", " << p.getY() << ")" ;
  return (out);
}
