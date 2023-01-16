#include "Point.hpp"
Fixed absNumber(Fixed num)
{
  // if (num > 0)
  //   return (num);
  // return (num * Fixed(-1));
  return num < Fixed(0) ? num * -1 : num;
}

Fixed triangleArea(Point a, Point b, Point c){
  Fixed area = Fixed(0.5f) * (a.getX() * (b.getY() - c.getY())
                  + b.getX() * (c.getY() - a.getY())
                  + c.getX() * (a.getY() - b.getY()));
  return (absNumber(area));
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
  Fixed areaT = triangleArea(a , b, c);
  Fixed areaTA = triangleArea(a, b, point);
  Fixed areaTB = triangleArea(b, c, point);
  Fixed areaTC = triangleArea(c, a, point);
  Fixed sumTS  = areaTA  + areaTB + areaTC ;
  return (areaTA != 0
          && areaTB != 0 
          && areaTC != 0 
          && areaT == sumTS);
}
