#ifndef __FIXED_H__
#define __FIXED_H__
#include<iostream>

class Fixed{
public:
  Fixed(void);
  Fixed(const Fixed &other);// missing object parameter copy consturcture
  ~Fixed(void);

  Fixed &operator=(const Fixed &other);

  void setRawBits(int num);
  int  getRawBits(void)const;
  
private:
  int              _fNumber;
  static const int _fractionBite;
};
#endif //__FIXED_H__
