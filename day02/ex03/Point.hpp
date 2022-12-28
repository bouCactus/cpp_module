
#ifndef __POINT_H__
#define __POINT_H__

#include"Fixed.hpp"

class Point{
  /*_____todo_____
   * a member function to set x and y 
   */
public:
  Point();
  Point(Point& obj);
  Point(float x, float y);

  Point& operator=(Point const &obj);
  ~Point();
  Fixed getX()const;
  Fixed getY()const;
private:
  Fixed const x;
  Fixed const y;
};

std::ostream& operator<<(std::ostream &out , const Point &p);
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
