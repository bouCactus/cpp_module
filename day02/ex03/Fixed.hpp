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
  Fixed operator-(const Fixed &obj);
  Fixed operator*(const Fixed &obj);
  Fixed operator/(const Fixed &obj);

  bool operator<(const Fixed &obj);
  bool operator>(const Fixed &obj);
  bool operator<=(const Fixed &obj);
  bool operator>=(const Fixed &obj);
  bool operator==(const Fixed &obj);
  bool operator!=(const Fixed &obj);

 Fixed&  operator++(int);
 Fixed&  operator++();
 Fixed&  operator--(int);
 Fixed&  operator--();
 ~Fixed();
  
  float toFloat(void) const;
  int   toInt(void)const;
  void setRawBits(int num);
  int getRawBits(void)const;
  static Fixed& min(Fixed& objOne, Fixed& objTwo);
  static Fixed& min(const Fixed& objOne, const Fixed& objTwo);
  static Fixed& max(Fixed& objOne, Fixed& ObjTwo);
  static Fixed& max(const Fixed& objOne, const Fixed& ObjTwo);
private:
  int              fNumber;
  static const int fractionBite = 8;
};
std::ostream& operator<<(std::ostream &out , const Fixed &Fnumber);
#endif
