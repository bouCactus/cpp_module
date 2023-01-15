
#include "Point.hpp"


Point::Point(void):
  _x(0),
  _y(0){
}

Point::~Point(void){
}

Point::Point(Fixed x, Fixed y):
  _x(x),
  _y(y){
  
}

Point::Point(const Point &other){
  *this = other;
}

Point::Point(float x, float y) :
  _x(Fixed(x)),
  _y(Fixed(y)){
}

Point &Point::operator=(const Point &other){
  if (this != &other){
    _x = other.getX();
    _y = other.getY();
  }
  return (*this);
}

void Point::setX(Fixed x){
  _x = x;
}

void Point::setY(Fixed y){
  _y = y;
}

Fixed Point::getX(void) const {
  return (_x);
}

Fixed Point::getY(void) const{
  return (_y);
}
