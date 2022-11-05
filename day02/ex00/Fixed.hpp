#ifndef __FIXED_H__
#define __FIXED_H__
#include<iostream>

class Fixed{
public:
  Fixed();
  Fixed(const Fixed &obj);// missing object parameter copy consturcture
  void operator=(const Fixed &objPassByref);
  ~Fixed();
  void setRawBits(int num);
  int getRawBits(void)const;
  
private:
  int              fNumber;
  static const int fractionBite = 8;
};
#endif
