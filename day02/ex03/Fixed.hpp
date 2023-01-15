#ifndef __FIXED_H__
#define __FIXED_H__
#include<iostream>
#include<cmath>

class Fixed{
public:
  Fixed(void);
  ~Fixed(void);
  Fixed(int num);
  Fixed(float const num);
  Fixed(const Fixed& other);

  Fixed& operator=(const Fixed& other);
  
  Fixed  operator+(const Fixed &obj);
  Fixed  operator-(const Fixed &obj);
  Fixed  operator*(const Fixed &obj);
  Fixed  operator/(const Fixed &obj);

  bool   operator<(const Fixed &obj);
  bool   operator>(const Fixed &obj);
  bool   operator<=(const Fixed &obj);
  bool   operator>=(const Fixed &obj);
  bool   operator==(const Fixed &obj);
  bool   operator!=(const Fixed &obj);

 Fixed   operator++(int);
 Fixed&  operator++();
 Fixed   operator--(int);
 Fixed&  operator--();

  
  float  toFloat(void) const;
  int    toInt(void)const;
  void   setRawBits(int num);
  int    getRawBits(void)const;

  static Fixed& min(Fixed& first, Fixed& second);
  static Fixed& min(const Fixed& first, const Fixed& second);
  static Fixed& max(Fixed& first, Fixed& second);
  static Fixed& max(const Fixed& first, const Fixed& second);

private:
  int              _fNumber;
  static const int _fractionBite;
};
std::ostream& operator<<(std::ostream &out , const Fixed &fixed);

#endif
