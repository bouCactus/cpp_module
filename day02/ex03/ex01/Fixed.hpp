/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:02:25 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:02:26 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  Fixed(const Fixed &other);

  Fixed &operator=(const Fixed &other);

  
  float    toFloat(void) const;
  int      toInt(void)const;
  void     setRawBits(int const num);
  int      getRawBits(void)const;
  
private:
  int              _fNumber;
  static const int _fractionBite;
};

std::ostream& operator<<(std::ostream &out , const Fixed &Fnumber);

#endif //__FIXED_H__
