
#ifndef __POINT__H_
#define __POINT__H_
#include "Fixed.hpp"

class Point{
public:
  Point(void);
  ~Point(void);
  Point(Fixed x, Fixed y);
  Point(float x, float y);
  Point(const Point &other);
  Point &operator=(const Point &other);

  void setX(Fixed x);
  void setY(Fixed y);
  Fixed getX(void) const;
  Fixed getY(void) const;
private:
  Fixed _x;
  Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif // __POINT__H_
