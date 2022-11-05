#ifndef __FIXED_H__
#define __FIXED_H__
#include<iostream>
#include<cmath>

class Fixed{
public:
  Fixed();
  Fixed(int num);
  Fixed(float const num);
  Fixed(const Fixed& obj);

  void operator=(const Fixed& objPassByref);
  
  Fixed operator+(const Fixed& obj);
  /*
  void operator-(const Fixed &obj);
  void operator*(const Fixed &obj);
  void operator/(const Fixed &obj);
  void operator<(const Fixed &obj);
  void operator>(const Fixed &obj);
  void operator<=(const Fixed &obj);
  void operator>=(const Fixed &obj);
  void operator==(const Fixed &obj);
  void operator!=(const Fixed &obj);
  */

  ~Fixed();
  
  float toFloat(void) const;
  int   toInt(void)const;
  void setRawBits(int num);
  int getRawBits(void)const;
  
private:
  int              fNumber;
  static const int fractionBite = 8;
};
#endif
