/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:02:13 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:02:14 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__
#include<iostream>

class Fixed{
public:
  Fixed(void);
  Fixed(const Fixed &other);
  ~Fixed(void);

  Fixed &operator=(const Fixed &other);

  void setRawBits(int const num);
  int  getRawBits(void)const;
  
private:
  int              _fNumber;
  static const int _fractionBite;
};

#endif //__FIXED_H__
